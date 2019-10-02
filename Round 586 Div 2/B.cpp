//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
void solve()
{
  int n;
  cin>>n;
  int a[n][n];
  ll x;
  std::vector<int> v;
  for (int i = 0; i < n; ++i)
  {
    x=-1;
    for (int j = 0; j < n; ++j)
    {
      cin>>a[i][j];
      if(a[i][j]==0) continue;
      if(x==-1) x=a[i][j];
      else x=gcd(x,a[i][j]);
    }
    deb(x)
    v.pb(x);
  }
  for (int i = 1; i < n; ++i)
  {
    if(v[i-1]*v[i]!=a[i-1][i])
    {
      v[i-1]/=(v[i-1]*v[i]/a[i-1][i]);
    }
  }
  for (int i = 0; i < n; ++i)
  {
    cout<<v[i]<<" ";
  }


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