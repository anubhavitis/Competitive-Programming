//Mark XXVI
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
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,j,n;

void solve()
{
  cin>>n;
  int arr[n+1];
  rep(i,1,n+1) cin>>arr[i];
  int m,p[n+1]={},x,y;
  cin>>m;
  rep(i,1,m+1) 
  {
    cin>>x>>y;
    p[y]=max(p[y],x);
  }
  rrep(i,n-1,1) p[i]=max(p[i],p[i+1]);
  
  int mx=arr[1],l=1,ans=1;
  rep(i,1,n+1)
  {
    mx=max(mx,arr[i]);
    if(mx>p[1]) { cout<<"-1\n"; return; }

    if(p[i-l+1]<mx)
    {
      ans++;
      mx=arr[i];
      l=i;
      i--;
    }
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
  cin>>t;
  while(t--)
    solve();
} 