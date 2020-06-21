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
  int n,temp,a[10000]={};
  cin>>n;
  std::vector<int> v;
  for (int i = 0; i < n; ++i)
  {
    cin>>temp;
    a[temp]++;
    v.pb(temp);
  }

  int ans=0;
  for (int i = 0; i < v.size(); ++i)
  {
    if( a[v[i]] > 1 )
    {
      a[v[i]]--;
      int y=v[i]/10;
      for (int j = 0; j < 10; ++j)
        if(a[j+y*10]==0)
        {
          a[j+y*10]++;
          ans++;
          v[i]=j+y*10;
          break;
        }
    }
  }

  cout<<ans<<"\n";
  for(auto i:v)
    cout<<setw(4)<<setfill('0')<<i<<"\n";
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
    solve();
    //cout<<"\n";
    deb('\n')
  }
}