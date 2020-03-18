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
#define rep(i,a,b) for(int i=a; i<b; ++i)

using namespace std;

void solve()
{
  unsigned ll n,k,a,b;
  cin>>n>>k>>a>>b;
  
  if(n<k or k==1) { cout<<(n-1)*a; return; }
  unsigned ll cnt=0;
  while(n>k)
  {
    if(n%k) cnt+=a*(n%k),n-=(n%k);
    if(n==k) break;
    cnt+=min((n-n/k)*a,b);
    n/=k; 
  }

  if(n==k) cnt+=min((n-1)*a,b);
  else cnt+=(n-1)*a;

  cout<<cnt;
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