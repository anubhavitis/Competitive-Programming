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
  string s;
  cin >> n >> s;
  queue<int> q1,q0;
  int cg=1;
  vector<int> ans;
  ans.pb(1);
  if(s[0]=='0') q0.push(1);
  else q1.push(1);
  rep(i,1,n){
    if(s[i]=='0'){
      if(q1.size()==0){
        cg++;
        q0.push(cg);
        ans.pb(cg);
      }
      else{
        q0.push(q1.front());
        ans.pb(q1.front());
        q1.pop();
      }
    }
    else{
      if(q0.size()==0){
        cg++;
        q1.push(cg);
        ans.pb(cg);
      }
      else{
        q1.push(q0.front());
        ans.pb(q0.front());
        q0.pop();
      }
    }
  }
  cout<<cg<<endl;
  for(auto it: ans) cout<<it<<" ";
  cout<<endl;
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