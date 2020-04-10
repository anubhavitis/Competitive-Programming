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
  int i,n,k;
  cin>>n>>k;
  int num[n];
  rep(i,0,n) cin>>num[i];
  ll a[n-k+1]={};
  ll sum=0;
  rep(i,0,k) sum+=num[i];
  a[0]=sum;
  rep(i,1,n-k+1)
  {
    sum-=num[i-1];
    sum+=num[i+k-1];
    a[i]=sum;
  }
  ll x=-1,y=-1,mi1=0,mi2=0;
  rep(i,0,n-k+1)
    if(mi1<a[i])
    { 
      mi1=a[i];
      x=i;
    }
    deb(x+1)
  rep(i,0,n-k+1)
  {
    if(mi2<a[i] and (i+k-1<x or i>(x+k-1)) ) mi2=a[i],y=i;
  }
  cout<<min(x+1,y+1)<<" "<<max(x+1,y+1);

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