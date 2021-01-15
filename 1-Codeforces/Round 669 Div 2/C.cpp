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
ll i, j, n, k, z;

void solve(void) {
  cin >> n;
  vector<int> ans(n);
  int mx=1;
  for(int i=2; i<=n; ++i){
    int r1,r2;
    cout<<"? "<<mx<<" "<<i<<endl;
    cout.flush();
    cin>>r1;
    cout<<"? "<<i<<" "<<mx<<endl;
    cout.flush();
    cin>>r2;
    cerr<<r1<<" "<<r2<<endl;
    if(r1>r2){
      ans[mx-1]=r1;
      mx=i;
    }
    else{
      ans[i-1]=r2;
    }
  }
  ans[mx-1]=n;
  cout<<"! ";
  for(auto it: ans) cout<<it<<" ";
  cout.flush();
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
  // cin >> t;

  while (t--)
    solve();
}