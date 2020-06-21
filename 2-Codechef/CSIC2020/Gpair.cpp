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

void solve()
{
  int n;
  cin>>n;
  int a[n];
  rep(0,n,1) cin>>a[i];
  ll l=(n*(n-1))/2;
  int gp[l],p=0;
  for(int i=0;i<n-1;++i)
    for(int j=i+1;j<n;++j)
      gp[p++]=a[i]+a[j];
  int cnt=l;
  int mex=-1;
  rep(0,l,1) mex=max(mex,gp[i]);
  for(int i=2;i*i<=mex;++i)
  {
    for(int j=0;j<l;++j)
      if( gp[j]!=-1 and i<gp[j] and gp[j]%i==0) cnt--,gp[j]=-1;
  }

  cout<<cnt<<endl;
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