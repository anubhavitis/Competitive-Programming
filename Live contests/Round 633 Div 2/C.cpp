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
  int n;
  cin>>n;
  ll a[n];
  rep(i,0,n)  cin>>a[i];
  if(n==1) { cout<<"0\n"; return; }
  ll mi=a[1]-a[0];
  ll mx=a[0];
  rep(i,1,n)
  {
    mi=min(mi,a[i]-mx);
    mx=max(mx,a[i]);
  }
  deb(mi)
  if(mi>=0) { cout<<"0\n"; return; }
  mi*=-1;
  int cnt=0;
  ll dup=mi;
  // deb(mi)
  while(mi)
  {
    mi/=2;
    cnt++;
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
  cin>>t;
  while(t--)
    solve();
} 