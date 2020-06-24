//Mark XXV
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve()
{
  int n,x,y;
  cin>>n>>x>>y;
  
  int a[n];
  rep(i,0,n) cin>>a[i];
  if(x>y) { cout<<n; return; }
  int cnt=0;
  rep(i,0,n) if(a[i]<=x) cnt++;
  cout<<ceil(cnt/2.0);
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