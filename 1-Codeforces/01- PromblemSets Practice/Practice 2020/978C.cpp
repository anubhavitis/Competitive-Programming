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
  int n,m;
  cin>>n>>m;
  vector<ll> v(n),dup(n+1,0);
  rep(i,1,n+1) cin>>v[i-1],dup[i]=dup[i-1]+v[i-1];
  ll x;
  rep(i,0,m)
  {
    cin>>x;
    int it=lb(all(dup),x)-dup.begin();
    deb(it)
    if(dup[it]>x) cout<<it<<" "<<x-dup[it-1]<<endl;
    else cout<<it<<" "<<v[it-1]<<endl;
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