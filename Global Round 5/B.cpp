//Mark XVI
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
  map<int ,int > m;
  int a[n],b[n],key=0;
  int temp,ans=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    m[a[i]]=0;
  }

  for (int i = 0; i < n; ++i)
  {
    cin>>temp;
    if(temp==a[key])
      while(key<n)
      {
        key++;
        if(m[a[key]]==0) break;
      }
    else
    {
      deb(temp)
      // deb(a[key])
      ans++;
    }
    m[temp]=1;

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
    deb('\n')
    solve();
  }
}