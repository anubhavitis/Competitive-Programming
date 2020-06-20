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

ll i,j,n,k;

void solve()
{
  string s;
  cin>>n>>k>>s;

  int a[26]={};
  for(auto it:s) a[(it-'a')]++;

  int ans=0;
  rep(i,1,k+1){
    if(k%i) continue;
    rep(j,1,n+1){
      if(j%i) continue;
      int cnt=0;
      // cerr<<i<<" "<<j<<endl;
      for(int z=0;z<26;++z){
        cnt+=a[z]/(j/i);
      }
      if(cnt>=i) ans=max(ans,(int)j);
    }
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