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
ll fact[500006];

ll pe(ll x, ll y)  
{  
  ll res = 1;
  x = x % M;
  while (y > 0)  
  {  
    if (y & 1)  
        res = (res*x) % M;
    y = y>>1;
    x = (x*x) % M;  
  }  
  return res;  
}

ll inv(ll x)
{
  return pe(x,M-2);
}
ll Comp(ll x,ll y)
{
  if(y>x) return 0;
  return (fact[x]*((inv(fact[y])*inv(fact[x-y]))%M))%M;
}

void solve()
{
  cin>>n>>m;

  if(n<m) { cout<<"0\n"; return; }  
  ll ans=0;
  deb(Comp(0,0))
  rep(i,1,n+1) ans= (ans + Comp((n/i)-1,m-1))%M;
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

  fact[0]=1;
  rep(i,1,500006) fact[i]=(i*fact[i-1])%M;
  ll t=1;
  // cin>>t;
  while(t--)
    solve();
} 