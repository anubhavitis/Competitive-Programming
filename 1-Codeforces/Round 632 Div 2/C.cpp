//Mark XXIV
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
int i,j;
using namespace std;

void solve()
{
  int n;
  cin>>n;

  ll a[n+1];
  rep(i,1,n+1) cin>>a[i];
  ll cma[n+1]={};
  rep(i,1,n+1) cma[i]=cma[i-1]+a[i];
  ll cnt=0;
  map<ll,int> m;
  m[0]=0;
  j=0;
  rep(i,1,n+1)
  {
    if(m.find(cma[i])!=m.end())
    {
      j=max(j,m[cma[i]]+1);
      cnt+=(i-j);
      m[cma[i]]=i;
      continue;
    }
    m[cma[i]]=i;
    cnt+=(i-j);
  }
  cout<<cnt<<endl;


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