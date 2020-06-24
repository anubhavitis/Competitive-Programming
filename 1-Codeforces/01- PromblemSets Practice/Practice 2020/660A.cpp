//Mark XVIII
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

using namespace std;

void solve()
{
  int n;
  cin>>n;
  int a[2*n-1]={},cnt=0;
  for (int i = 0; i < n; ++i) cin>>a[2*i];
  
  for(int i = 1; i < 2*n-1; i+=2)
  {
    if(__gcd(a[i-1],a[i+1])==1) a[i]=0;
    else a[i]=1,cnt++;
  }
  cout<<cnt<<"\n";
  for (int i = 0; i < 2*n-1; ++i)
  {
    if(a[i]) cout<<a[i]<<" ";
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