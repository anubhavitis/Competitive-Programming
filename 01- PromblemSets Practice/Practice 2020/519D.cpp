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
  int a[26]={};
  rep(i,0,26) cin>>a[i];

  string s; cin>>s;
  ll pref[s.size()]={};
  pref[0]=a[int(s[0]-'a')];
  rep(i,1,s.size()) pref[i]=pref[i-1]+a[int(s[i]-'a')];

  // rep(i,0,s.size()) cerr<<pref[i]<<" ";
  map<char , vector<int> > mapi;
  rep(i,0,s.size()) mapi[s[i]].pb(i);
  ll ans=0;
  for(auto it: mapi)
  {
    vector<int> v=it.second;
    rep(i,1,v.size()) rep(j,0,i)
      if(v[j]+1==v[i]) { ans++; }
      else if(pref[v[i]-1]-pref[v[j]]==0) { ans++; }
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
  // cin>>t;
  while(t--)
    solve();
} 