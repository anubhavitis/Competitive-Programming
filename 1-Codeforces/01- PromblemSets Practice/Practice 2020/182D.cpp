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

string getr(string s)
{
  string ans,dup=s;
  do
  {
    char ch=dup[0];
    dup.erase(dup.begin());
    dup+=ch;
    ans+=ch;
  }while(dup!=s);

  return ans;
}

void solve()
{
  string s1,s2;
  cin>>s1>>s2;
  string ns1=getr(s1),ns2=getr(s2);
  if(ns1!=ns2) 
  {
    cout<<"0\n";
    return;
  }

  int x=s1.size()/ns1.size();
  int y=s2.size()/ns2.size();

  map<int,int> m;

  for(int ii=1;ii*ii<=x;++ii)
    if(x%ii==0) m[x/ii]=1,m[ii]=1;
  int ans=0;
  for(int ii=1;ii*ii<=y;++ii)
    if(y%ii==0)
    {
      if(m[ii]) ans++;
      if(m[y/ii] and y/ii!=ii) ans++;
    } 
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
    solve();
} 