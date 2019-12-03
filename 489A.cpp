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

  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  std::vector<pair<int,int> > v;
  for (int i = 0; i < n; ++i)
  {
    int m=INT_MAX,key=-1;
    for (int j = i; j < n; ++j)
    {
      if(m>a[j]) m=a[j],key=j;
    }
    if(i==key) continue;
    swap(a[i],a[key]);
    v.pb(mp(i,key));
  }
  cout<<v.size()<<"\n";
  for(auto i:v) cout<<i.first<< " "<<i.second<<"\n";
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