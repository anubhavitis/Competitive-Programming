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
  int n;
  cin>>n;
  int i,a[2*n];
  rep(i,0,n) cin>>a[i],a[i+n]=a[i];
  int s,f;
  cin>>s>>f;

  ll sum[n]={};
  rep(i,0,f-s) sum[0]+=a[i];
  rep(i,1,n) sum[i]=sum[i-1]-a[i-1]+a[f-s+i-1];

  ll mi=0;
  std::vector<int> v;
  rep(i,0,n) mi=max(mi,sum[i]);
  rep(i,0,n) if(mi==sum[i]) v.pb((s-i)>0? (s-i):(s-i+n));
  sort(all(v));
  cout<<v[0];
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