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

ll i,j,n,m;
 
void solve()
{
  cin>>n;
  ll arr[n];
  rep(i,0,n) cin>>arr[i];
  std::vector<ll> ans;
  ans.pb(arr[0]);

  rep(i,1,n)
  {
    ll curr=arr[i];
    if(arr[i]<ans[ans.size()-1])
    {
      rep(j,i+1,n)
      {
          if(arr[j]>=curr)
              break;
          curr=min(curr,arr[j]);
          i=j;
      }
    }
    else
    {
      rep(j,i+1,n)
      {
          if(arr[j]<=curr)
              break;
          curr=max(curr,arr[j]);
          i=j;
      }
    }
    ans.pb(curr);
  }
    cout<<ans.size()<<"\n";
    for(auto it: ans)
        cout<<it<<" ";
    cout<<"\n";
        
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