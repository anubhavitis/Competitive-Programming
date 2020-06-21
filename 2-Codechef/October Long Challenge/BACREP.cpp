// Mark XVI
// :-))
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void Get(auto& edge,auto& visited,auto& v,int node,ll prev)
{
    if( visited[node] or edge[node].size()==0 ) return;
    if(edge[node].size()==1 and node!=1 )
    { 
        v[node]+=prev;
        return;
    }
    visited[node]=1;
    
    for(int i=0;i<edge[node].size();i++)
    {
        Get(edge,visited,v,edge[node][i],v[node]);
    }
    v[node]=prev;
    return;
}

void solve()
{
  int n,q;
  cin>>n>>q;
  std::vector < std::vector<ll> > node_edge(n+1);
  std::vector<ll> v(n+1);
  for(int i=0;i<n-1;i++)
  {
      int x,y;
      cin>>x>>y;
      node_edge[x].pb(y);
      node_edge[y].pb(x);
  }
      
  for(int i=1;i<=n;i++) cin>>v[i];
  
  cin.ignore();
  for(int i=0; i<q; i++)
  {
      string s;
      getline(cin,s);
      
      std::vector<bool> visited(n+1,0);
      Get(node_edge,visited,v,1,0);
      if(s[0]=='?')
        cout<<v[stoi(s.substr(2,s.length()-2))]<<endl;
      else
      {
          s.pb(' ');
          int pos=2;
          string s1="",s2="";
          while(s[pos]!=' ') s1.pb(s[pos++]);
          pos++;
          while(s[pos]!=' ') s2.pb(s[pos++]);
          
          v[stoi(s1)]+=stoi(s2);
      }
  }
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
  {
    deb('\n')
    solve();
  }
}