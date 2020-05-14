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

// #define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve()
{
  int n,m,k;
  cin>>n>>m>>k;
  int a[n][m],b[n+1][m+1]={};
  rep(i,0,n) rep(j,0,m) cin>>a[i][j];

  rep(j,0,m)
  {
    int x=k;
    rrep(i,n-1,0)
    {
      if(!x)  b[i][j]=b[i+1][j]+a[i][j]-a[i+k][j];
      else
      {
        b[i][j]=b[i+1][j]+a[i][j];
        x--;
      }
    }    
  }
  // rep(i,0,n) { rep(j,0,m) cerr<<b[i][j]<<" "; cerr<<endl;}
  int ans1=0,ans2=0;
  rep(j,0,m)
  {
    int key=0,cnt=0,cntkey=0;
    rep(i,0,n)
    {
      if(a[i][j]!=1) continue;
      if(b[i][j]>key) key=b[i][j],cntkey=cnt;
      cnt++;
    }
    // deb(key)
    ans1+=key;
    ans2+=cntkey;
  }
  cout<<ans1<<" "<<ans2<<endl;
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