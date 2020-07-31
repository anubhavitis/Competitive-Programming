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

int i, j, n, m;
vector<int> dad;
int find(int node) {
  if (node == -1) return -1;
  if (dad[node] == node) return node;
  return dad[node] = find(dad[node]);
}

void solve(void) {
  int n;
  string a, b;
  cin >> n >> a >> b;
  dad.assign(27, -1);
  int cnt[26] = {};
  rep(i, 0, n) {
    if (a[i] > b[i]) { cout << "-1\n"; return; }
    if (a[i] == b[i]) continue;

    if (dad[a[i] - 'a'] == -1) dad[a[i] - 'a'] = a[i] - 'a';
    if (dad[b[i] - 'a'] == -1) dad[b[i] - 'a'] = b[i] - 'a';
    dad[find(a[i] - 'a')] = find(b[i] - 'a');
    cnt[a[i] - 'a'] = 1;
    cnt[b[i] - 'a'] = 1;
  }
  vector<int> v(26, 0);

  rep(i, 0, 26) { int t = find(i); if (t >= 0) v[t]++;}
  int sum=0;
  for(auto it: v) if(it) sum+=it-1;
  cout<<sum<<endl;
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