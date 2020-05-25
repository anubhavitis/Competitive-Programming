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

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m;

void solve()
{
  string s;
  cin>>n>>s;

  vector<int> li,si;

  i=0;
  int cnt=0;
  while(cnt<n)
  {
    if(s[i]=='<')
    {
      rep(j,i,n-1) if(s[j]=='>') break;
      int dup=i;
      while(i<=j) { si.pb(cnt+j-i); i++; }
      cnt+=j-dup+1;
    }
    else si.pb(cnt++),i++;
  }
  rep(i,0,n) cout<<n-si[i]<<" "; cout<<"\n";

  i=0; cnt=1;
  while(cnt<=n)
  {
    if(s[i]=='>')
    {
      j=0;
      while(j+i<n-1) if(s[j+i]=='<') break;
      i=i+j;
      while(j>=0) li.pb(cnt+j--);
    }
    else li.pb(cnt++),i++;
  }
  rep(i,0,n) cout<<li[i]<<" "; cout<<"\n";

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