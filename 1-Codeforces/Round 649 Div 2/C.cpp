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

int i,j,n,m;
 
void solve()
{
  cin>>n;
  int a[1000001],pos[1000001]={},used[1000001]={};
  rep(i,1,n+1) 
  {
    cin>>a[i];
    pos[a[i]]++;
  }
  int p=0;
  std::vector<int> ans;
  stack<int> rem;
  rep(i,0,n+1)
  {
    if(pos[i]==0) continue;

    while(pos[i])
    {
      if(rem.size())
      {
        pos[i]--;
        ans.pb(rem.top());
        rem.pop();
        continue;
      }
      while(pos[p] or used[p]) p++;
      used[p]++;
      ans.pb(p++);
      pos[i]--;
    }
    rem.push(i);
  }
  for(auto it:ans) cout<<it<<" ";
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
  // cin>>t;
  while(t--)
    solve();
} 