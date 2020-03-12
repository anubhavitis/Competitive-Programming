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
  int n,w;
  cin>>n>>w;
  int a[n+n];
  double sum=0;
  map<int,int> m;
  for(int i=0;i<2*n+1;++i) cin>>a[i],m[a[i]]++;
  sort(a,a+2*n);
  for(int i=n;i<2*n;++i)
  {
    int l=0,r=n-1;
    while(l<=r)
    {
      int mid=(l+r)/2;
      
    }
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
    solve();
    cout<<"\n";
    deb('\n')
  }
}