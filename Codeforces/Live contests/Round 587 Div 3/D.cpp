//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve()
{
  int n;
  cin>>n;
  ll a[n],m=-1;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    m=max(m,a[i]);
  }
  std::vector<ll> v;
  bool f=true;
  ll y;
  for (int i = 0; i < n; ++i)
  {
    if(a[i]!=m)
    {
      v.pb(abs(a[i]-m));
      if(f) { y=abs(a[i]-m); f=false; }
      else y=__gcd(y,abs(a[i]-m));
    }
  }
  ll x=0;
  for(auto i:v)
  {
    x+=i/y;
  }
  cout<<x<<" "<<y;
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
  {
    solve();
  }
}