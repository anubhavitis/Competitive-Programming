//Mark XXV
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define ull unsigned ll
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,j,k;
int dep[200001];
int str[200001];
int val[200001];
vector<int> v[200001];

void dfs(int node,int h)
{
  dep[node]=h;

  int cnt=1;
  for(auto it:v[node])
  {
    if(dep[it]==0)
      dfs(it,h+1),cnt+=str[it];
  }
  str[node]=cnt;
  val[node]=dep[node]-str[node];
}

void solve()
{
  int n,k;
  cin>>n>>k;
  int x,y;
  rep(i,0,n)
  {
    cin>>x>>y;
    v[x].pb(y);
    v[y].pb(x);
  }
  dfs(1,1);
  sort(val+1,val+n+1,big(int));

  // ll sum=0;
  // rep(i,1,k+1) sum+=val[i];
  // cout<<sum<<endl;
  cout<<accumulate(val+1,val+k+1,(ll)0)<<endl;
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