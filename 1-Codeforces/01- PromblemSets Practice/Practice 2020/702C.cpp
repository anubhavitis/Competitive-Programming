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

  vector<int> v(n),t(m);
  rep(i,0,n) cin>>v[i];
  rep(i,0,m) cin>>t[i];
  sort(all(t));
  int ans=0;
  for(auto i:v)
  {
    auto p=lb(all(t),i);
    deb(*p)
    int r=0,l=0;
    if(p==t.end()) ans=max(ans,i-*(p-1));
    else if(p==t.begin()) ans=max(ans,*p-i);
    else if(*p==i) continue;
    else ans=max(ans,min(*p-i,i-*(p-1)));
  }
  cout<<ans;
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