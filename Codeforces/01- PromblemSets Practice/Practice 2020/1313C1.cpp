//Mark XXIII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)

using namespace std;

void solve()
{
  int n;
  cin>>n;

  int i,a[n];
  rep(i,0,n) cin>>a[i];
  int ans[n],temp[n];
  ll sum=0,m=0;
  rep(i,0,n)
  {
    m=a[i];
    temp[i]=a[i];
    for(int j=i-1;j>=0;--j) temp[j]=min(temp[j+1],a[j]),m+=temp[j];
    for(int j=i+1;j<n;++j) temp[j]=min(temp[j-1],a[j]), m+=temp[j];

    if(sum<m)
    {
      sum=m;
      for(int j=0;j<n;++j)
        ans[j]=temp[j];
    }
  }
  for(auto i:ans) cout<<i<<" ";
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