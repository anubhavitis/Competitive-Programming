//Mark XIX
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

int temp;

using namespace std;

void solve()
{
  int n,a;
  cin>>n>>a;
  std::vector<int> v;
  for (int i = 0; i < n; ++i)
  {
    cin>>temp;
    v.pb(temp);
  }
  sort(all(v));
  if(n==1) cout<<"0";
  else
  cout<<min(min(abs(v[0]-a),abs(v[n-2]-a))+v[n-2]-v[0],
            min(abs(v[1]-a),abs(v[n-1]-a))+v[n-1]-v[1]);
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
    cout<<"\n";
    deb('\n')
  }
}
