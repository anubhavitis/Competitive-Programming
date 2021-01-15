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
  int a[n];
  int key=1;
  for (int i = 0; i < n; ++i)
  {
    a[i]=key;
    key+=n;
    if(i+1==n/2) key+=n-1;
  }
  for (int i = 0; i < n; ++i)
  {
    for(int j=0;j<n;++j)
    {
      cout<<a[j]<<" ";
      if(j<n/2) a[j]++;
      else a[j]--;  
    }
    cout<<"\n";
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
    deb('\n')
    solve();
  }
}