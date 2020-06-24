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
  string s,t;
  cin>>s>>t;
  int ans=0;
  n=s.size();
  int m=t.size();

  int firstpos[m]={};
  rep(i,0,n)
    if(s[i]==t[j]) firstpos[j++]=i;
  j=m-1;
  rrep(i,n-1,0)
  {
    if(s[i]==t[j] and j)
      ans=max(ans,i-firstpos[--j]-1);
    else if(s[i]==t[j] and !j)
      ans=max(ans,i);
  }
  ans=max(ans,n-firstpos[m-1]-1);
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