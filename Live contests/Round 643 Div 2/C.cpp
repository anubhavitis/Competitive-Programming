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
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  ll ans=0;
  rep(i,a,b+1)
  {
    int lz=d-c+1,ly=c-b+1;
    int x=min(max(i+b-c,0),lz);
    int y=min(max(i,0),lz);
    if(x) ans+=(y*(y+1))/2-(x*(x-1))/2 + y*(ly-(y-x+1));
    else
    {
      ans+=(y*(y+1))/2;
      int z=c-i;
      z+=y;
      ans+=y*(d-z);
    }
    deb(x)deb(y)
    deb(ans)
  }
  cout<<ans<<endl;

  // ll ans=(d-c+1)*(c-b+1)*(b-a+1);

  // int n=d-c+1
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