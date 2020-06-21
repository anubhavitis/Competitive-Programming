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

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m;

ll bin(string s)
{
  ll ans=0.pos=1;

  rrep(j,m-1,0)
  {
    if(s=='1') ans+=pos;
    pos=pos<<1;
  }
  return ans;
}
void solve()
{
  cin>>n>>m;
  string s;
  vector<ll> v;
  rep(i,0,n)
  {
    cin>>s;
    v.pb(bin(s));
  }
  sort(all(v));

  ll med=(pow(2,m)-1)/2;
  int cnt=lb(all(v),med)-v.begin();
  int r,l;
  if(v[cnt]==med)
  {
    r=cnt;
    l=n-med;
    int mi=min(r,l);
    r-=mi;
    l-=mi;
  }
  else
  {
    
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
  cin>>t;
  while(t--)
    solve();
} 