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
  int a[n+1],b[n+1];
  rep(i,0,n)
  {
    cin>>j;
    a[j]=i+1;
  }
  rep(i,0,n)
  {
    cin>>j;
    b[j]=i+1;
  }

  map<int,int> mapl,mapr;

  rep(i,1,n+1)
  {
    int y=b[i]-a[i];
    if(y==0) mapl[0]++,mapr[0]++;
    else if(y>0)  mapl[y]++,mapr[n-y]++;
    else mapl[n+y]++,mapr[abs(y)]++;
  }
  // for(auto it:mapl) cerr<<it.first<<" "<<it.second<<endl;cerr<<endl;
  // for(auto it:mapr) cerr<<it.first<<" "<<it.second<<endl;

  int ans=1;
  for(auto it: mapl) ans=max(ans,it.second);
  for(auto it: mapr) ans=max(ans,it.second);
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
  // cin>>t;
  while(t--)
    solve();
} 