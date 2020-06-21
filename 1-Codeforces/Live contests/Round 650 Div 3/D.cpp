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

void solve()
{
  string s;
  cin>>s>>m;
  int b[m],a[26]={};
  for(char ch:s) a[(ch-'a')]++;
  rep(i,0,m) cin>>b[i];
  string ans;
  rep(i,0,m) ans+='+';
  // deb(ans)
  rrep(i,25,0){
    if(!a[i]) continue;

    vector<int> v;
    rep(j,0,m) if(b[j]==0) v.pb(j);
    if(!v.size()) break;
    while( ( v.size()>a[i] or !a[i] ) and i>=0) i--;
    for(int p:v){
      ans[p]=char('a'+i);
      int cnt=0,te;
      rrep(te,p,0) b[te]-=cnt++;
      cnt=0;
      rep(te,p,m) b[te]-=cnt++;
      b[p]=-1;
    }
  }
  cout<<ans<<endl;
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