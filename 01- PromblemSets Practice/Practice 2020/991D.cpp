//Mark XXVI
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
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;


void solve()
{
  ll n,h;
  cin>>h>>n;
  ll a[n+5]={};
  rep(i,0,n) cin>>a[i];
  
  int ans=0;
  rep(i,0,n)
  {
    if(a[i]==1) break;
    if((a[i]-1)==a[i+1])
    {
      if(a[i+2]!=(a[i]-2)) 
      {
        int x=(a[i]-a[i+2]-1)/2 ;
        ans+=x;
        a[i+1]=a[i]-2*x;
      }
      else i++;
    }
    else
    {
      a[i]--;
      i--;
    }
  }
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
  ll t=1;
  cin>>t;
  while(t--)
    solve();
}