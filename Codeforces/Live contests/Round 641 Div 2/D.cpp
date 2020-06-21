//Mark XXVI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;


void solve()
{
  ll n,k;
  cin>>n>>k;    
  int a[n];
  rep(i,0,n) cin>>a[i];
  int f1=0,f2=0;
  if(n==1) 
  {
    if(a[0]==k) cout<<"yes\n";
    else cout<<"no\n";
    return;
  }
  if(n==2)
  {
    if(a[0]>a[1]) swap(a[0],a[1]);
    if(a[0]==k and a[1]>=k) cout<<"yes\n";
    else cout<<"no\n";
    return; 
  }
  rep(i,0,n-2)
  {
    int x=a[i],y=a[i+1],z=a[i+2];
    if(x>y) swap(x,y);
    if(y>z) swap(y,z);
    if(x>y) swap(x,y);

    if(x==k or y==k or z==k) f1=1;
    if(y>=k and z>=k) f2=1;
  }
  if(f1 and f2) cout<<"yes\n";
  else cout<<"no\n";
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