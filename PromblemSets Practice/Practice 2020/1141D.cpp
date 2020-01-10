//Mark XIX
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

int temp;

using namespace std;
map<char,std::vector<int> > m1,m2;
std::vector<pair<int,int> > v;

void calc(char c,char n)
{
  while(m1[c].size() and m2[n].size())
  {
    v.pb(mp(m1[c].back(),m2[n].back()));
    m1[c].pop_back();
    m2[n].pop_back();
  }
}

void solve()
{
  int n;
  string s,s2;
  cin>>n>>s>>s2;
  
  for(int i=0;i<n;++i) m1[s[i]].pb(i+1),m2[s2[i]].pb(i+1);
  
  for(auto i:m1)
  {
    if(i.first=='?') continue;
    calc(i.first,i.first);
    calc(i.first,'?');
    calc('?',i.first);
  }
  for(auto i: m2) calc('?',i.first);
  calc('?','?');

  cout<<v.size()<<"\n";
  for(auto i:v) cout<<i.first<<" "<<i.second<<"\n";
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
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}