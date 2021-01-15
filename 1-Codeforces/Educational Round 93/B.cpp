//Mark XXIX
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
void FIO() {
#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
}
#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

//Code begins from here!!
ll i, j, n, k, z;

void solve(void) {
  string s;
  cin >> s;

  vector<int> v;
  int cnt = 0;
  for (auto it : s) {
    if (it == '1') cnt++;
    else {
      if (cnt == 0) continue;
      else v.pb(cnt), cnt = 0;
    }
  }
  v.pb(cnt);
  sort(all(v), big(int));

  int a1=0,a2=0;
  rep(i,0,v.size())
    if(i&1) a2+=v[i];
    else a1+=v[i];

  cout<<max(a1,a2)<<endl;
}

int main()
{

  FIO();
  IOS()
  ll t = 1;
  cin >> t;
  while (t--)
    solve();
}