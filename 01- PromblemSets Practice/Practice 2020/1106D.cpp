//Mark XXVI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve()
{
  int n,m;
  cin>>n>>m;
  set<int> v[n+1];
  int x,y;

  rep(i,0,m)
  {
    cin>>x>>y;
    v[x].insert(y);
    v[y].insert(x);
  }
  bool a[n+1]={};
  std::vector<int> ans;
  priority_queue <int, vector<int>, greater<int> > q;
  q.push(1);

  while(ans.size()<n)
  { 
    if(a[q.top()]==true) { q.pop(); continue; }
    int tp=q.top();
    a[tp]=true;
    ans.pb(tp);
    q.pop();

    for(auto it:v[tp]) 
      if(a[it]==false) q.push(it);
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
  //cin>>t;
  while(t--)
    solve();
} 