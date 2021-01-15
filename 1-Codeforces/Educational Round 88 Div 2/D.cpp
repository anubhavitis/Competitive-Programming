//Mark XXVII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define deball(x) for(auto iit:x) cerr<<iit<<" ";cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,j,n,m,k;

int maxsum(int arr[])
{
  int sum[n],ans;
  sum[0]=ans=arr[0];
  rep(j,1,n) 
  {
    sum[j]=max(arr[j],arr[j]+sum[j-1]);
    ans=max(ans,sum[j]);
  }
  return ans;

}

void solve()
{
  cin>>n;
  int arr[n];
  int avail[61]={};
  rep(i,0,n) cin>>arr[i],avail[arr[i]+30]=1;

  int ans=-10000000;
  rrep(i,60,0)
  {
    if(!avail[i]) continue;

    rep(j,0,n) if(arr[j]>(i-30)) arr[j]=-10000000;
    ans=max(ans,maxsum(arr)-(i-30));
  }
  cout<<ans<<endl;
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
  // cin>>t;
  while(t--)
    solve();
} 