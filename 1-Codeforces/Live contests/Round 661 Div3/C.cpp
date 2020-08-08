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

int i, j, n, k, z;

void solve(void) {
  cin >> n;
  vector<ll> a(n);
  rep(i, 0, n) cin >> a[i];

  int dp[101]={};
  rep(i,2,101){
    int vis[101]={};
    rep(j,0,n){
      if(vis[j]==0){
        vis[j]=1;
        rep(k,0,n){
          if(vis[k]==0 and (a[j]+a[k])==i){
            dp[i]++;
            vis[k]=1;
            break;
          }
        }
      }
    }
  } 
  int ma=0;
  for(auto it: dp) ma=max(ma,it);
  cout<<ma<<endl;
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
  cin >> t;
  while (t--)
    solve();
}