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

int i,j,n,k;

void solve(){
  cin>>n;
  ll sum1=0,sum2=0;
  vector<ll> node(n),path(n);
  rep(i,0,n) {
    cin>>node[i];
    sum1+=node[i];
  }
  rep(i,0,n) {
    cin>>path[i];
    sum2+=path[i];
  }
  if(sum2<sum1 or node[0]>(path[0]+path[n-1]) ) { cout<<"NO\n"; return; }
  rep(i,1,n)
    if(node[i]>(path[i]+path[i-1])) { cout<<"NO\n"; return; }

  cout<<"YES\n";
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