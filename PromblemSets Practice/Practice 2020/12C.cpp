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
  int m,n;
  cin>>n>>m;
  string s;
  map <string,int> mp;
  int p[n];
  std::vector<int> v;
  for (int i = 0; i < n; ++i) cin>>p[i];
  sort(p,p+n);
  for (int i = 0; i < m; ++i)
  {
    cin>>s;
    mp[s]++;
  }
  for(auto i:mp) v.pb(i.second);
  sort(all(v),big(int));

  int mi=0,ma=0;

  for(int i=0;i<v.size();++i)
  {
    mi+=v[i]*p[i];
    ma+=v[i]*p[n-i-1];
  }
  cout<<mi<<" "<<ma;
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