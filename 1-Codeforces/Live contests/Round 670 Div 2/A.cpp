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
// ll i, j, n, k, z;

void solve(void) {
  int n; cin >> n;
  vector<int> v(101,0);
  int rep=0;
  for(int i=0; i<n; ++i){
    int j;
    cin>>j;
    v[j]++;
  }
  // deball(v)
  int f0=-1, f1=-1;
  for(int i=0; i<101; ++i){
    // cerr<<f0<<" "<<f1<<" "<<v[i]<<endl;
    if(v[i]==1 and f0==-1 and f1==-1) f1=i;
    if(v[i]==0 and f0==-1) f0=i;
  }
  // cerr<<f0<<" "<<f1<<endl;
  if(f1==-1) cout<<2*f0<<endl;
  else cout<<f0+f1<<endl;
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