//Mark XXVI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,j,n;

void solve()
{
  int m;
  cin>>n>>m;
  int arr[n+2],dec[n+1]={},rdec[n+1]={};
  arr[0]=arr[n+1]=0;
  rep(i,1,n+1) cin>>arr[i];
  rep(i,1,n+1)
  {
    dec[i]=1+ ((arr[i]<=arr[i-1])? dec[i-1]:0);
    rdec[n+1-i]=1+((arr[n+1-i]<=arr[n+1-i+1])? rdec[n+1-i+1]:0);
  }
  // rep(i,1,n+1) cerr<<dec[i]<<" "; cerr<<"\n";
  // rep(i,1,n+1) cerr<<rdec[i]<<" "; cerr<<"\n";
  while(m--)
  {
    int p,q;
    cin>>p>>q;
    if(dec[q]+rdec[p]>q-p+1) cout<<"Yes\n";
    else cout<<"No\n";
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
  // cin>>t;
  while(t--)
    solve();
} 