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
  int a[n],b[n+1]={};
  rep(0,n,1) cin>>a[i],b[a[i]]++;
  int f=0;
  rep(0,n,1)
  {
    if(b[a[i]]>1)
    {
      if(a[i+1]!=a[i]) f=1;
      b[a[i]]--;
    }
  }
  if(f) cout<<"YES\n";
  else cout<<"NO\n";

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