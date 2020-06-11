//Mark XXVII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define deball(x) for(auto iit:x) cerr<<iit<<" ";cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m;

void solve()
{
  cin>>n>>m;
  int v[n][m];
  rep(i,0,n) rep(j,0,m) cin>>v[i][j];
  vector< pair<int,int> > dia(n+m-1);

  rep(i,0,m)
  {
    dia[i].first=dia[i].second=0;
    int x=1,y=i+1;
    while(y>=1 and x<=n)
    {
      if(v[x-1][y-1]==0) dia[i].first++;
      else dia[i].second++;

      x++;
      y--;
    }
  }
  rep(i,1,n)
  {
    dia[m-1+i].first=dia[m-1+i].second=0;
    int x=i+1,y=m;
    while(x<=n and y>=1)
    {
      if(v[x-1][y-1]==0) dia[m-1+i].first++;
      else dia[m-1+i].second++;

      x++;
      y--; 
    }
  }
  int ans=(v[0][0]!=v[n-1][m-1])?1:0;
  rep(i,1,(n+m-1)/2)
  {
    ans+=min(dia[i].first+dia[n+m-2-i].first,dia[i].second+dia[n+m-2-i].second);
    
  }
  cout<<ans<<endl;

}

int main()
{
  //Skipped in presense of online judge.
  #ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt","r",stdin);
  freopen("/home/zeddie/Documents/output.txt","w",stdout);
  freopen("/home/zeddie/Documents/error.txt","w",stderr);
  #endif

  IOS()
  ll t=1;
  cin>>t;
  while(t--)
    solve();
} 