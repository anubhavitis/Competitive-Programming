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
  int n,k;
  string s;
  cin>>n>>k>>s;
  sort(all(s));

  if(s[0]!=s[k-1] or k==n) { cout<< s[k-1]<<endl; return; }
  if(s[0]==s[k-1])
  {
    cout<<s[0];
    if(s[k]==s[n-1])
    {
      int t=n-k;
      rep(i,0,t/k) cout<<s[k];
      if(t%k) cout<<s[k];
    }
    else
      rep(i,k,n) cout<<s[i];
    cout<<endl;
    return;
  }
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