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
int n,m,M[1005][1005];
bool visi[1005][1005]={};

void getarea(int x,int y)
{
  visi[x][y]=1;
  if(x== (n-1) and y==(m-1)) return;
  if(y!=(m-1) and M[x][y+1]==1 and visi[x][y+1]!=1) getarea(x,y+1);
  if(x!=(n-1) and M[x+1][y]==1 and visi[x+1][y]!=1) getarea(x+1,y);
  if(x!=0 and M[x-1][y]==1 and visi[x-1][y]!=1) getarea(x-1,y);
  if(y!=0 and M[x][y-1]==1 and visi[x][y-1]!=1) getarea(x,y-1);

}

int cnt()
{
  int c=0;

  rep(i,0,n)
    rep(j,0,m)
      if(M[i][j]==1 and visi[i][j]!=1)
        c++,getarea(i,j);
        
  return c;
}

void solve()
{
  cin>>n>>m;
  string s;
  int fr=0,fc=0;
  rep(i,0,n)
  {
    cin>>s;
    int t=0;
    rep(j,0,m)
      if(s[j]=='.') M[i][j]=0;
      else M[i][j]=1;
  }
  int ans=cnt();
  rep(i,0,n)
  {
    bool f=false;
    rep(j,0,m)
    {
      if(M[i][j]) f=true;
      if(M[i][j]==0 and M[i][min(m-1,j+1)]==1 and f) ans=-1;
    }
    if(!f) fr=1;
  }
  rep(j,0,m)
  {
    bool f=false;
    rep(i,0,n)
    {
      if(M[i][j]) f=true;
      if(M[i][j]==0 and M[min(i+1,n-1)][j]==1 and f) ans=-1;
    }
    if(!f) fc=1;
  }
  // deb(ans)deb(fr)deb(fc)
  if(!(fr^fc)) cout<<ans;
  else cout<<"-1";
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