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

int t1,t2;

using namespace std;

void solve()
{
  int n;
  cin>>n;
  int a[n+1];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  int x[n+1],y[n+1];
  x[0]=1;y[n-1]=1;
  for (int i = 1; i < n; ++i)
  {
    x[i]= (a[i]>=a[i-1])? x[i-1]+1:1;
    y[n-1-i]= (a[n-1-i]>=a[n-i])? y[n-i]+1:1;
  }
  int ma=-1;
  for(int i=0;i<n;++i) ma=max(x[i]+y[i]-1,ma);
  cout<<ma;
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