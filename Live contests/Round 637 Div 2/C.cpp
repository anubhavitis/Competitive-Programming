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
  int n,dup;
  cin>>n;
  dup=n;
  int a[n+1],temp;
  rep(i,1,n+1) { cin>>temp; a[temp]=i; }
  bool trav[n+1]={};
  trav[dup]=true;
  int b=1;
  while(b<=n)
  {
    trav[a[dup]]=true;
    if(a[dup]==b)
    {
      while(trav[b]==true and b<=n) b++;
      dup--;
      continue;
    }
    if(a[dup]==(a[dup-1]+1)) dup--;
    else if(a[dup]!=b) { cout<<"No\n"; return; }
  }
  cout<<"Yes\n";
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