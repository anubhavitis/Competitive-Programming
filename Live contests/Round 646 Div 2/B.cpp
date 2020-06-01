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
ll fact[100001];


void solve()
{
  string s;
  cin>>s;
  n=s.size();
  int cnt[n]={},cntz[n]={};
  rep(i,0,n)
    if(s[i]=='1') cnt[i]=1;
    else cntz[i]=1;
  rep(i,1,n)
    cnt[i]+=cnt[i-1],cntz[i]+=cntz[i-1];

  int t1=cnt[n-1],t0=cntz[n-1];

  int ans=n;
  rep(i,0,                                n)
  {
    ans=min(ans,cntz[i]+t1-cnt[i]);
    ans=min(ans,cnt[i]+t0-cntz[i]);
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