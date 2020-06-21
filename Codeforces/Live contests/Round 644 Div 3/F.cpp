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

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m;

bool comp(string a,string b)
{
  int ii,cnt=0;
  rep(ii,0,m) if(a[ii]!=b[ii]) cnt++;
  return (cnt<=1);
}
void solve()
{
  cin>>n>>m;
  string s[n];
  rep(i,0,n) cin>>s[i];
  bool f=1;

  rep(i,0,m)
  {
    // deb(i)
    rep(j,0,n)
    {
      string aps=s[0];
      aps[i]=s[j][i];
      // cerr<<i<<" "<<j<<" "<<aps<<endl;
      f=1;int z;
      rep(z,0,n) if(!comp(aps,s[z])) f=0;
      if(f) { cout<<aps<<endl; return; }
    }
  }
  cout<<"-1\n";
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