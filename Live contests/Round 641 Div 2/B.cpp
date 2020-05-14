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

vector<int> printDivisors(int n) 
{ 
  vector<int> v;
  for (int i=1; i<=sqrt(n); i++) 
    if (n%i == 0) 
    { 
      if (n/i == i) v.pb(i);
      else v.pb(i),v.pb(n/i); 
    } 
  return v;
} 

void solve()
{
  ll n,k;
  cin>>n;
  int a[n+1],val[n+1];
  map<int,int> ind;
  rep(i,1,n+1) cin>>a[i],ind[a[i]]=i;
  val[1]=1;
  int ans=1;
  rep(i,2,n+1)
  {
    val[i]=1;
    vector<int> v=printDivisors(i);
    for(auto it:v)
    {
      if(it==i or a[it]>=a[i]) continue;
      val[i]=max(val[i],1+val[it]);
      // cerr<<it<<" "<<ind[it]<<"\n";
      // deb(val[i])
    }
    ans=max(ans,val[i]);
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