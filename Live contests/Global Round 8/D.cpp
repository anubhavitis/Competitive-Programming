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
  cin>>n;
  int a[20]={};
  rep(i,0,n){
    cin>>k;
    rep(j,0,20){
      a[j]+=k%2;
      k/=2;
    }
  }
  ll ans=0;
  while(1){
    int mi=INF;
    rep(i,0,20) if(a[i]) mi=min(mi,a[i]);
    if(mi==INF) break;
    ll prod=0;
    rep(i,0,20) 
      if(a[i]){
        a[i]-=mi;
        prod+=pow(2,i);
      }
    ans+=mi*prod*prod;
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
  // cin>>t;
  while(t--)
    solve();
} 