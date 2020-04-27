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
int i,j;
using namespace std;

void solve()
{
  int n,k;
  cin>>n>>k;
  int a[n],p[n]={};
  rep(i,0,n) cin>>a[i];
  rep(i,1,n-1) if(a[i]>a[i-1] and a[i]>a[i+1]) p[i]=1;
  int sum=0,ans=0;
  rep(i,1,k-1) sum+=p[i];
  int key=0;
  ans=sum;
  rep(i,1,n-k+1)
  {
    sum=sum-p[i]+p[i+k-2];
    if(sum>ans) key=i,ans=sum;
  }
  cout<<ans+1<<" "<<key+1<<endl;


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