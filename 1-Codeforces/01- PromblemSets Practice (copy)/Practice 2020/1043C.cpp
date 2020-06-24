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
  string s;
  cin>>s;
  int n=s.size();
  vector<int> v;
  char key=s[0];
  for(int i=1;i<n-1;++i)
  {
    if(s[i+1]==key) v.pb(1),key=s[i];
    else v.pb(0);
  }
  if(n>1)
  {
    if(s[n-1]<key) v.pb(1);
    else v.pb(0);
  }
  cout<<"1 ";
  for(auto i:v) cout<<i<<" ";
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