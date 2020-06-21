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
  ll a,b,q;
  cin>>a>>b>>q;
  if(a>b) swap(a,b);
  ll lc=(a*b)/(__gcd(a,b));
  rep(i,0,q)
  {
    ll l,r,ans,ans1,ans2,ans3;
    cin>>l>>r;
    if(r<b) { cout<<"0 "; continue; }
    l=max(l,b);
    r=max(r,b);
    
    ll first=(l/lc)*lc;
    ll last= (r/lc)*lc;
    ll cnt=r/lc-(l-1)/lc;
    ans=r-l+1-b*max((ll)0,cnt-1);

    if(first<l and first+b-1>=l and first ) ans-=(min(r,first+b-1)-l+1);
  
    if(last+b-1>r and last>=l) ans-=(r-last+1);
    if(last>=l and last+b-1<=r) ans-=b;

    cout<<ans<<" ";

  }
  cout<<endl;
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