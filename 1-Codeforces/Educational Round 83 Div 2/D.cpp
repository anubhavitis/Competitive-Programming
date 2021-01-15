//Mark XXI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(a,b,c) for(int i=a; i<b; i+=c)
using namespace std;
ll power(ll x, ll y) 
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

void solve()
{
  int n,m;
  cin>>n>>m;
  ll f[200001]={};
  f[0]=1;
  rep(1,200001,1) f[i]=(i*f[i-1])%M;

  ll c1=( f[m]* power(f[n-1], M-2) % M * power(f[m-n+1], M-2) % M ) % M ;
  deb(c1)
  ll c2=power(2,n-3);
  deb(c2)
  ll c3=(n-2);
  deb(c3)
  cout<<( ( (c1*c2)%M )*c3 )%M;




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
  //cin>>t;
  while(t--)
    solve();
}