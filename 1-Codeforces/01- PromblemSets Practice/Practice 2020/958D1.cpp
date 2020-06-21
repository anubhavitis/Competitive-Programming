//Mark XXVI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve()
{
  int m;
  cin>>m;
  double a[m];
  map<double,int> mp;
  string s;
  int x,y,z;
  rep(i,0,m)
  {
    cin>>s;
    string temp;
    for(j=1;s[j]!='+';++j) temp+=s[j];
    x=stoi(temp);
    temp="";
    j++;
    while(s[j]!=')') temp+=s[j++];
    y=stoi(temp);
    temp="";
    j+=2;
    while(j<s.size()) temp+=s[j++];
    z=stoi(temp);
    a[i]=(x+y)/double(z);
    mp[a[i]]++;
  }
  for(auto i:a) cout<<mp[i]<<" ",cerr<<i<<" ";
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