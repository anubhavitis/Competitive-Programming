//Mark XXI
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
#define rep(a,b,c) for(int i=a; i<b; i+=c)
using namespace std;

int bsh(int arr[], int l, int h, int x) 
{ 
  int low=l,high=h;
  while(high>=low)
  {
    int mid=(low+high)/2;
    if(arr[mid]+x>0) high=mid-1;
    else low=mid+1;
  }
  if(low==h+1) return 0;
  if(high==l-1) return h-l+1;
  return h+1-low;
} 
void solve()
{
  int n;
  cin>>n;
  int a[n],b[n];
  rep(0,n,1) cin>>a[i];
  rep(0,n,1) cin>>b[i];
  int d[n];
  rep(0,n,1) d[i]=a[i]-b[i];
  sort(d,d+n);
  ll cnt=0;
  for(int i=0;i<n-1;++i)
    cnt+=bsh(d,i+1,n-1,d[i]);
  cout<<cnt;

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
    solve();
}