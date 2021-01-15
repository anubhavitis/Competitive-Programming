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
vector<int> adj[20];
vector<int> vis;

void dfs(int node){
  vis[node]=1;
  for(auto child: adj[node]){
    if(!vis[child]) dfs(child);
  }
}

void solve(void) {
    int n;
    cin >> n;
    vector<char> v(26,'+');
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for(auto it:adj) it.clear();
    vis.assign(20,0);
    set<char> s;
    for (int i = 0; i < n; i++) {
      if (a[i] > b[i]) {
          ans = -1;
          break;
      }
      if(a[i]==b[i]) continue; 
      s.insert(a[i]);
      s.insert(b[i]);
      adj[a[i]-'a'].pb(b[i]-'a');
      adj[b[i]-'a'].pb(a[i]-'a');
    }
    int k=0;
    for(auto it:s){
      if(!vis[it-'a']){
        k++;
        dfs((it-'a'));
        cerr<<endl;
      }
    }
    if(ans==-1) cout<<ans<<endl;
    else  cout << s.size()-k << '\n';
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
  cin>>t;
  while(t--)
    solve();
} 