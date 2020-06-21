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

int i,j,n,m;
 
void solve()
{
  int x;
  cin>>n>>x;

  vector<int> v(n+1),pref(n+1,0);
  int l=-1,r=-1;
  rep(i,1,n+1)
  {
    cin>>v[i];
    pref[i]=pref[i-1]+v[i];
  }
  if(pref[n]%x!=0) cout<<n<<endl;
  else
  {
    rrep(j,n,1) if(pref[j]%x!=0) break;
    rep(i,1,n+1)  if(pref[i]%x!=0) break;
    if(i==n+1) cout<<"-1\n";
    else cout<<max(j,n-i)<<endl;
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