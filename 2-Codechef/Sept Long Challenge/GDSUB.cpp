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

ll su(std::vector<ll> v,int r, int l)
{
  ll sum=0;
  while(r<=l) { sum= (sum+v[r]); r++; }
  return sum;
}

void solve()
{

  int k,n,temp;
  ll a[8001]={};
  cin>>n>>k;
  for (int i = 0; i < n; ++i)
  {
    cin>>temp;
    a[temp]++;
  }
  std::vector<ll> v,V;
  for (int i = 2; i < 8001; ++i)
  {
    if(a[i]) v.pb(a[i]);
  }
  V=v;
  if(k>V.size()) k=V.size();

  ll ans=( 1 + su( v, 0, v.size()-1 ) ) % M;
  
  std::vector<ll> v2; 
  for (int i = 2; i <=k; ++i)
  {
    ll N=v.size();
    ll sum=su(v,0,N-1);
    for (int i = 0; i < N; ++i)
    {
      sum-=v[i];
      v2.pb( (V[i] * sum )%M );
    }
    ans = ( ans + su(v2,0,N-2) )%M;
    v.clear();
    v=v2;
    v2.clear();
  }
  cout<<ans;
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