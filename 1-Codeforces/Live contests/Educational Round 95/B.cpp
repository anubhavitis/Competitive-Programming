//Mark XXX
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
#define deball(x) for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

//Code begins from here!!
bool comp( pair<ll,ll> p1, pair<ll,ll> p2){
  if(p1.second==1 or p2.second==1) return false;

  return p1.first<=p2.first;
}
void solve(void) {
  ll n;
  cin >> n;
  vector<pair<ll,ll>> val(n);
  for (auto &it : val) cin >> it.first;
  for (auto &it : val) cin >> it.second;

  sort(all(val), comp);
  for(auto it: val) cout<<it.first<<" ";
  cout<<endl;

}

int main()
{

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