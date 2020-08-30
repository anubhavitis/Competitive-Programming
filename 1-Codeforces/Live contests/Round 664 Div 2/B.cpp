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

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i, j, n, k, m;

void solve(void) {
  int c, d;
  cin>>n>>m>>c>>d;
  int x=c,y=d;
  
  while(y) cout<<x<<" "<<y--<<endl;
  y=d+1;
  while(y<=m) cout<<x<<" "<<y++<<endl;

  int col=m;
  rep(i,1,n+1){
    if(i==c) continue;

    if(col==m){
      rrep(j,m,1) cout<<i<<" "<<j<<endl;
      col=1;
    }
    else{
      rep(j,1,m+1) cout<<i<<" "<<j<<endl;
      col=m;
    }
  }



}
int main()
{
  //Skipped in presense of online judge.
#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif

  IOS()
  ll t = 1;
  // cin >> t;
  while (t--)
    solve();
}