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

ll i,j,n,k;

void solve()
{
  cin>>n;
  string s;
  int f=1;
  int arr[n][n],preup[n][n],prele[n][n];
  rep(i,0,n)
  {
    cin>>s;
    rep(j,0,n) arr[i][j]=(s[j]-'0'); 
  }
  rep(i,0,n-1)
  {
    rep(j,0,n-1)
      if(arr[i][j])
      {
        if(arr[i+1][j] or arr[i][j+1]) f=1;
        else { f=0; break; }
      }
    if(f==0) break;
  }

  if(f) cout<<"YES\n";
  else cout<<"NO\n";

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