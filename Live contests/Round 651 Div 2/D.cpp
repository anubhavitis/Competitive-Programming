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

void solve(){
  cin>>n>>k;
  std::vector<int> v(n);
  rep(i,0,n) cin>>v[i];
  int l=1,r=1000000000,mid,ans=INF;
  while(l<=r){
    mid=(l+r)/2;
    int len1=0;
    rep(i,0,n){
      if(len1%2 and v[i]<=mid) len1++;
      else if(len1%2==0) len1++;
    }
    int len2=1;
    rep(i,0,n){
      if(len2%2 and v[i]<=mid) len2++;
      else if(len2%2==0) len2++;
    }
    len2--;
    int len=max(len1,len2);
    // cerr<<l<<" "<<r<<" "<<len<<endl;
    if(len>=k) ans=min(ans,mid),r=mid-1;
    else l=mid+1;
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