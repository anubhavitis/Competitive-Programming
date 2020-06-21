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
  int a[n];
  std::map<int, vector<int> > m;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    m[a[i]].pb(i+1);
  }
  sort(a,a+n,greater<int>());
  ll ans=1;
  std::vector<int> v=m[a[0]];
  int key=a[0];
  for (int i = 1; i < n; ++i)
  {
    ans+=i*a[i]+1;
    if(key!=a[i])
    {
      for (auto j: m[a[i]])
      {
        v.pb(j);
      }
      key=a[i];
    }
  }
  cout<<ans<<"\n";
  for(auto i: v)
    cout<<i<<" ";

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