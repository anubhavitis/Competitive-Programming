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
  int v1,v2,t,d;
  cin>>v1>>v2>>t>>d;

  ll sum=v1+v2;
  int a[t+1];
  a[1]=v1;a[t]=v2;
    
  for(int i=2;i<=t-1;++i)
  {
    int dif=d;
    while(a[i-1]+dif-(t-i)*d>v2) dif--;
    a[i]=a[i-1]+dif;
    sum+=a[i];
  }
  cout<<sum;
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