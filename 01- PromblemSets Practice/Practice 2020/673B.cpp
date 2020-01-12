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
  if(m==0)
  {
    cout<<n-1;
    return;
  }
  int a[m][2];
  for (int i = 0; i < m; ++i)
  {
    cin>>a[i][0]>>a[i][1];
    if(a[i][0]>a[i][1]) swap(a[i][0],a[i][1]);
  }
  int mi=INT_MAX,ma=-1;
  for (int i = 0; i < m; ++i)
  {
    mi=min(a[i][1],mi);
    ma=max(a[i][0],ma);
  }

  cout<<max(0,mi-ma);


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