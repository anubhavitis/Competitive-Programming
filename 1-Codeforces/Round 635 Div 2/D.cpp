//Mark XXV
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define ull unsigned ll
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)

#define M 998244353
#define LINF 1e19
#define INF INT_MAX
int i,j,k;
using namespace std;

void solve()
{
  int nr,ng,nb;
  cin>>nr>>ng>>nb;

  ull r[nr],g[ng],b[nb];
  rep(i,0,nr) cin>>r[i];
  sort(r,r+nr);
  rep(i,0,ng) cin>>g[i];
  sort(g,g+ng);
  rep(i,0,nb) cin>>b[i];
  sort(b,b+nb);

  ull ans=LINF;

  rep(i,0,nr)
  {
    int y1,y2,z1,z2;
    y1=ub(g,g+ng,r[i])-g;
    y2=y1-1;
    z1=ub(b,b+nb,r[i])-b;
    z2=z1-1;

    if(y1<ng)
    {
      if(z1<nb) ans=min(ans,3*(r[i]*r[i]+g[y1]*g[y1]+b[z1]*b[z1])-(r[i]+g[y1]+b[z1])*(r[i]+g[y1]+b[z1]));
      if(z2>=0) ans=min(ans,3*(r[i]*r[i]+g[y1]*g[y1]+b[z2]*b[z2])-(r[i]+g[y1]+b[z2])*(r[i]+g[y1]+b[z2]));
    }
    if(y2>=0)
    {
      if(z1<nb) ans=min(ans,3*(r[i]*r[i]+g[y2]*g[y2]+b[z1]*b[z1])-(r[i]+g[y2]+b[z1])*(r[i]+g[y2]+b[z1]));
      if(z2>=0) ans=min(ans,3*(r[i]*r[i]+g[y2]*g[y2]+b[z2]*b[z2])-(r[i]+g[y2]+b[z2])*(r[i]+g[y2]+b[z2])); 
    }
  }
  rep(i,0,ng)
  {
    int y1,y2,z1,z2;
    y1=ub(r,r+nr,g[i])-r;
    y2=y1-1;
    z1=ub(b,b+nb,g[i])-b;
    z2=z1-1;

    if(y1<nr)
    {
      if(z1<nb) ans=min(ans,3*(g[i]*g[i]+r[y1]*r[y1]+b[z1]*b[z1])-(g[i]+r[y1]+b[z1])*(g[i]+r[y1]+b[z1]));
      if(z2>=0) ans=min(ans,3*(g[i]*g[i]+r[y1]*r[y1]+b[z2]*b[z2])-(g[i]+r[y1]+b[z2])*(g[i]+r[y1]+b[z2]));
    }
    if(y2>=0)
    {
      if(z1<nb) ans=min(ans,3*(g[i]*g[i]+r[y2]*r[y2]+b[z1]*b[z1])-(g[i]+r[y2]+b[z1])*(g[i]+r[y2]+b[z1]));
      if(z2>=0) ans=min(ans,3*(g[i]*g[i]+r[y2]*r[y2]+b[z2]*b[z2])-(g[i]+r[y2]+b[z2])*(g[i]+r[y2]+b[z2])); 
    }
  }
  rep(i,0,nb)
  {
    int y1,y2,z1,z2;
    y1=ub(g,g+ng,b[i])-g;
    y2=y1-1;
    z1=ub(r,r+nr,b[i])-r;
    z2=z1-1;

    if(y1<ng)
    {
      if(z1<nr) ans=min(ans,3*(b[i]*b[i]+g[y1]*g[y1]+r[z1]*r[z1])-(b[i]+g[y1]+r[z1])*(b[i]+g[y1]+r[z1]));
      if(z2>=0) ans=min(ans,3*(b[i]*b[i]+g[y1]*g[y1]+r[z2]*r[z2])-(b[i]+g[y1]+r[z2])*(b[i]+g[y1]+r[z2]));
    }
    if(y2>=0)
    {
      if(z1<nr) ans=min(ans,3*(b[i]*b[i]+g[y2]*g[y2]+r[z1]*r[z1])-(b[i]+g[y2]+r[z1])*(b[i]+g[y2]+r[z1]));
      if(z2>=0) ans=min(ans,3*(b[i]*b[i]+g[y2]*g[y2]+r[z2]*r[z2])-(b[i]+g[y2]+r[z2])*(b[i]+g[y2]+r[z2])); 
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