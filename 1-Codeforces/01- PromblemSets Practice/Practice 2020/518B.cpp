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
  string s,t;
  cin>>s>>t;
  map<char,int> m;
  for(auto i:t)
    m[i]++;
  int ans=0;
  std::vector<char> v;
  for(auto i:s)
    if(m[i]) ans++,m[i]--;
    else v.pb(i);
  cout<<ans<<" ";
  ans=0;
  for(auto i:v)
    if(m[i-32]) ans++,m[i-32]--;
    else if(m[i+32]) ans++,m[i+32]--;
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
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}