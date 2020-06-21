//Mark XXV
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

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve(int t)
{
  int n;
  ll d;
  cin>>n>>d;
  ll a[n];
  rep(i,0,n) cin>>a[i];
  ll mi=d;
  rep(i,1,n)
    mi=min(mi,d-(d%a[i]));
  mi=mi-(mi%a[0]);
  // if(a[0]>mi) mi=a[0];
  cout<<"Case #"<<t<<": "<<mi<<endl;
  
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
  rep(j,1,t+1)
    solve(j);
} 