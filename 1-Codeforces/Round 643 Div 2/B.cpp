//Mark XXVI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
ll i,j;
using namespace std;

void solve()
{
  int n;
  cin>>n;
  int arr[n];
  rep(i,0,n) cin>>arr[i];
  sort(arr,arr+n,big(int));

  int ans1=0;
  i=0;
  while(i<n)
  {
    if(arr[i]>(n-i)) break;
    i+=arr[i];
    ans1++;
  }
  sort(arr,arr+n);

  int ans2=0;
  i=0;
  while(i<n)
  {
    j=1;
    while(arr[i]!=j and i<n)
    {
      i++;
      j++;
    }
    if(i==n) break;

    ans2++;
    i++;
  }
  cout<<max(ans1,ans2)<<endl;
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
    solve();
}