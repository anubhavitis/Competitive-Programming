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
  int n,m;
  cin>>n>>m;
  std::vector<int> v(n);
  
  int a[m];
  rep(i,0,m) a[i]=-1;
  
  rep(i,0,n)
  {
    cin>>v[i];
    int b[m]={};
    rep(j,0,m) if(a[j]>0) b[(v[i]+j)%m]=1;
    b[v[i]%m]=1;
    rep(j,0,m) if(b[j]) a[j]=b[j];
    if(a[0]>0) { break; }
  }

  if(a[0]>0) cout<<"YES\n";
  else cout<<"NO\n";
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