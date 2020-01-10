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

void solve()
{
  int n;
  string s;
  cin>>n>>s;
  map< char,std::vector<int> > m1,m2;
  for(int i=0;i<n;++i) m1[s[i]].pb(i+1);
  cin>>s;
  for(int i=0;i<n;++i) m2[s[i]].pb(i+1);
  std::vector<int> v1,v2;
  std::vector< pair<int,int> > ans;
  for(auto i:m1)
  {
    if(i.first=='?') continue;
    int x=min(m2[i.first].size(),i.second.size());
    for (int ii = 0; ii < x; ++ii)
      ans.pb(mp(i.second[ii],m2[i.first][ii]));
    if(m2[i.first].size()>i.second.size())
      for(int t=x;t<m2[i.first].size();++t) v2.pb(m2[i.first][t]);
    else if(m2[i.first].size()<i.second.size())
      for(int t=x;t<i.second.size();++t) v1.pb(i.second[t]);
  }

  int i,j;
  deb(ans.size())
  deb(v1.size())deb(v2.size())
  for(i=0;i<v1.size();i++)
  {
    if(m2['?'].size()==i) break;
    ans.pb(mp(m2['?'][i],v1[i]));
  }
  for(j=0;j<v2.size();j++)
  {
    if(m1['?'].size()==j) break;
    ans.pb(mp(m1['?'][j],v2[j]));
  }
  
  while(i<m1['?'].size() and j<m2['?'].size()) 
    ans.pb(mp(m1['?'][i++],m2['?'][j++]));

  cout<<ans.size()<<"\n";
  for(auto i:ans)
    cout<<i.first<<" "<<i.second<<"\n";

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