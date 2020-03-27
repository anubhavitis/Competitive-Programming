//Mark XXII
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
#define rep(i,b,c) for(int i=b; i<c; ++i)

using namespace std;

void solve()
{
  ll n,k;
  cin>>n>>k;
  ll ans=0,x=1,l=1,r=(n*(n-1))/2;
  while(l<=r)
  {
    x=(l+r)/2;
    if((x*(x+1))/2<k) ans=x,l=x+1;
    else r=x-1;
  }
  x=ans;
  k-=(x*(x+1))/2;
  rep(i,0,n)
  {
    if(i==n-x-2) cout<<'b';
    else if(i==n-k) cout<<'b';
    else cout<<'a';
  }
  cout<<endl;
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