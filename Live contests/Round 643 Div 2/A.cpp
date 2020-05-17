//Mark XXVI
#include<bits/stdc++.h>

// #define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
ll i,j;
using namespace std;


int big(unsigned ll n)
{
  int t=0;
  while(n)
  {
    if(t<(n%10)) t=n%10;
    n/=10;
  }
  return t;
}

int small(unsigned ll n)
{
  unsigned ll t=9;
  while(n)
  {
    t=min(t,n%10);
    n/=10;
  }
  return t;
}

void solve()
{
  unsigned ll n,k;
  cin>>n>>k;
  k--;
  while(k--)
  {
    int x,y;
    x=big(n);
    y=small(n);
    if(x==0 or y==0 ) break;
    n+=x*y;
  }
  cout<<n<<endl;

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