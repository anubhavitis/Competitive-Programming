//Mark XXVII
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
#define deball(x) for(auto iit:x) cerr<<iit<<" ";cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m;

vector<int> fd(int x)
{
  vector<int> ans;
  for(i=1;i*i<=x;++i)
  {
    if(x%i==0)
    {
      ans.pb(i);
      if(x/i!=i) ans.pb(x/i);
    }
  }
  sort(all(ans));
  return ans;
}
void solve()
{
  cin>>n;
  vector<int> v(n),f1,f2;
  rep(i,0,n) cin>>v[i];
  for(auto it:v)
  {
    vector<int> div=fd(it);
    if(div.size()<4)
    {
      f1.pb(-1);
      f2.pb(-1);
      cout<<"No\n";
      continue;
    }
    int f=1;
    deball(div)
    rep(i,1,div.size()-2)
      if(__gcd(div[i]+div[div.size()-2],it)==1)
      {
        cout<<"Yes\n";
        f=0;
        break;
      }
    if(f) cout<<"No\n";
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