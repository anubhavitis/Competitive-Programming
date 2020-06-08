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

void pos(auto& v, string a[], int x, int y)
{
  if(a[x][y]=='B' or a[x][y]=='#') return;
  v[x][y]=1;

  if(x!=0 and v[x-1][y]==0) pos(v,a, x-1,y);
  if(x!=n-1 and v[x+1][y]==0) pos(v,a,x+1,y);
  if(y!=0 and v[x][y-1]==0) pos(v,a, x,y-1);
  if(y!=m-1 and v[x][y+1]==0) pos(v,a,x,y+1);
   
}

void solve()
{
  cin>>n>>m;
  string a[n];
  bool f=false;
  rep(i,0,n)  cin>>a[i];

  rep(i,0,n)
    rep(j,0,m)
      if(a[i][j]=='B')
      {
        if(i!=0 and a[i-1][j]=='G') f=true;
        if(j!=0 and a[i][j-1]=='G') f=true;
        if(i!=n-1 and a[i+1][j]=='G') f=true;
        if(j!=m-1 and a[i][j+1]=='G') f=true;

        if(i!=0 and a[i-1][j]=='.') a[i-1][j]='#';
        if(j!=0 and a[i][j-1]=='.') a[i][j-1]='#';
        if(j!=m-1 and a[i][j+1]=='.') a[i][j+1]='#';
        if(i!=n-1 and a[i+1][j]=='.') a[i+1][j]='#';
      }
  if(f) { cout<<"NO\n"; return; }

  vector< vector<bool> > v(n, vector<bool>(m,0));
  pos(v,a,n-1,m-1);

  rep(i,0,n)
    rep(j,0,m)
      if(a[i][j]=='G' and !v[i][j])
      {
        cout<<"NO\n";
        return;
      }

  cout<<"YES\n";

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