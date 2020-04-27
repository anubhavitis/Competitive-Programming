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
    // ans+=r/lc + r/(l+r)-r/nlc;
    ans3=min(b,((r%lc)>b)?0:r%lc);
    if(ans3)  ans1=(r/lc -l/lc -1)*b ;
    else ans1=(r/lc -l/lc)*b ;
    ans2=max((ll)0,b-l%lc);
    ans=ans1+ans2+ans3;
    if((a+b)>=l and (a+b)<=r) ans++;
    ans=r-(l-1)-ans;
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