//Mark XVII
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
    map<int, std::vector<int> > m;
    int temp;
    for (int i = 0; i < n; ++i)
    {
      cin>>temp;
      m[temp].pb(i);
    }
    int ans=INT_MAX;
    for(auto i:m)
    {
      std::vector<int> v=i.second;
      for(int j=0;j<v.size()-1;++j)
        ans=min( ans, abs(v[j]-v[j+1]) );
    }
    if(ans==INT_MAX) cout<<"-1";
    else cout<<ans+1;


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
  {
    deb('\n')
    solve();
    cout<<"\n";
  }
}