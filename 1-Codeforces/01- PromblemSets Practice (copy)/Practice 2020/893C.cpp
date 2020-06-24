//Mark XXII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(int i=b; i<c; ++i)

using namespace std;

void solve()
{
  int n,m;
  cin>>n>>m;
  ll c[n];
  rep(i,0,n) cin>>c[i];
  map<int,vector<int> > mapi;
  int x,y,pass[n]={};
  rep(i,0,m)
  {
    cin>>x>>y;
    mapi[x-1].pb(y-1);
    mapi[y-1].pb(x-1);
  }
  ll cnt=0,mi=INT_MAX;
  deb(mi)
  queue<int> q;
  rep(i,0,n)
  {
    mi=INT_MAX;
    if(pass[i]==1) continue;
    pass[i]=1;
    mi=min(mi,c[i]);
    for(auto j:mapi[i]) 
      if(pass[j]==0) q.push(j),pass[j]=1;
    while(!q.empty())
    {
      int t=q.front();
      mi=min(mi,c[t]);
      for(auto j:mapi[t]) 
      if(pass[j]==0) q.push(j),pass[j]=1;
      q.pop();
    }
    cnt+=mi;
  }
  cout<<cnt;

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
  //cin>>t;
  while(t--)
    solve();
}