//Mark XXVI
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
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,j,n;

void solve()
{
  int ans=0;
  cin>>n;
  map<int,vector<int> > m;
  int arr[n+1]={};
  rep(i,1,n+1) cin>>arr[i], m[arr[i]].pb(i);
  for(auto it: m)
  {
    vector<int> sum(n+1,0);
    rep(i,1,n+1) sum[i]=sum[i-1]+(arr[i]==it.first);
    
    for(auto jt:m)
    {
      vector<int> v=jt.second;
      ans=max(ans,int(v.size()));
      for(int k=1;2*k<=v.size();++k)
        ans=max(ans,2*k+sum[v[v.size()-k]-1]-sum[v[k-1]] );
    }
  }
  cout<<ans<<endl;

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