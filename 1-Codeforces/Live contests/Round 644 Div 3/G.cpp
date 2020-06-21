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
  int a,b;
  cin>>n>>m>>a>>b;

  if(a*n!=b*m) { cout<<"NO\n"; return; }
  cout<<"YES\n";
  int sumc[m]={},arr[n][m]={};

  rep(i,0,n)
  {
    int k=a,z;
    rep(z,0,b)
    rep(j,0,m)
      if(sumc[j]==z and k) 
      {
        arr[i][j]=1;
        sumc[j]++;
        k--;
      }
  }
  rep(i,0,n)
    { rep(j,0,m) cout<<arr[i][j]; cout<<endl; }

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