//Mark XVII
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve()
{
  int n;
  cin>>n;
  string s,t;
  cin>>s>>t;
  std::vector<int> v;
  for (int i = 0; i < n; ++i)
    if(s[i]!=t[i]) v.pb(i);
  if(v.size()!=2) { cout<<"No"; return;}
  if(v.size()==2)
      if(s[v[0]]==s[v[1]] and t[v[0]]==t[v[1]])
        { cout<<"Yes"; return;}
  cout<<"No";


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
  {
    deb('\n')
    solve();
    cout<<"\n";
  }
}