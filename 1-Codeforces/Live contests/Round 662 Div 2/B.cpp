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

ll i, j, n, k, z;
void solve(void) {
  cin >> n;
  vector<int> v(100001, 0);
  rep(i, 0, n) cin >> j, v[j]++;;

  set<int> v8, v4, v6, v2;
  rep(i, 0, 100001) {
    if(v[i] >= 8) v8.insert(i);
    else if (v[i] >= 6) v6.insert(i);
    else if (v[i] >= 4) v4.insert(i);
    else if (v[i] >= 2) v2.insert(i);
  }

  int q;
  cin >> q;

  while (q--) {

    char c; int x;
    cin >> c >> x;
    if (v[x] >= 8) v8.erase(v8.find(x));
    else if (v[x] >= 6) v6.erase(v6.find(x));
    else if (v[x] >= 4) v4.erase(v4.find(x));
    else if (v[x] >= 2) v2.erase(v2.find(x));
    
    if (c == '+') v[x]++;
    else v[x]--;

    if (v[x] >= 8) v8.insert(x);
    else if (v[x] >= 6) v6.insert(x);
    else if (v[x] >= 4) v4.insert(x);
    else if (v[x] >= 2) v2.insert(x);

    // cerr<<v6.size()<<" "<<v4.size()<<" "<<v2.size()<<endl;;
    if(v8.size() or v4.size()>1 or (v6.size() and v2.size())) cout<<"YES\n";
    else if(v4.size() and v2.size()>1) cout<<"YES\n";
    else cout<<"NO\n";
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