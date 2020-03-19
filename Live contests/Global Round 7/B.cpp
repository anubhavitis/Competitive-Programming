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
  ll b[n],x[n],a[n],mo=0;
  cin>>b[0];
  x[0]=0;
  a[0]=x[0]+b[0];
  ll mi=max(mo,a[0]);
  cout<<a[0]<<" ";
  rep(1,n,1)
  {
    cin>>b[i];
    x[i]=mi;
    a[i]=b[i]+x[i];
    cout<<a[i]<<" ";
    mi=max(mi,a[i]);
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
    solve();
}