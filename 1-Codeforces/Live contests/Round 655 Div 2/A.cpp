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

vector<int> div(ll x){
  std::vector<int> v;
  v.pb(1);
  for(j=2;j*j<=x;++j){
    if(x%j==0){
      v.pb(j);
      if(x/j!=j) v.pb(x/j);
    }
  }
  return v;

}
 
void solve(){
  cin>>n;
  vector<int> v=div(n);

  int mi=n-1,ans=1;
  for(auto x:v) if(mi>((n/x)-1))
    mi=((n/x)-1),ans=x;

  cout<<ans<<" "<<mi*ans<<endl;

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