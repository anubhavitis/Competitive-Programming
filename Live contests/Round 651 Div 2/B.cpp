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
  cin>>n;
  int v[2*n];
  std::vector<int> odd,even;
  rep(i,0,2*n){
    cin>>v[i];
    if(v[i]%2) odd.pb(i+1);
    else even.pb(i+1);
  }
  int cnt=0;
  rep(i,0,even.size()){
    if((i+1)==even.size() or cnt==(n-1)) break;
    cout<<even[i]<<" "<<even[++i]<<endl;
    cnt++;
  }
  rep(i,0,odd.size()){
    if((i+1)==odd.size() or cnt==(n-1)) break;
    cout<<odd[i]<<" "<<odd[++i]<<endl;
    cnt++;
  }
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