//Mark XXIII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define int long long 
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define aint(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)

using namespace std;
int minarry(int* a,int b,int e)
{
  int m=LONG_MAX;
  for(int i=b;i<=e;++i) m=min(m,a[i]);
  for(int i=b;i<=e;++i) a[i]-=m; 
  return m;
}

pair<int,int> maxp(int *a,int b,int e)
{
  while(a[b]==0 and b<=e) b++;
  if(b==e+1) return mp(-1,-1);

  int kx,ky,x=b,y;
  int sum=-1,mi=a[b];
  for(int i=b+1;i<=e;++i)
  {
    y=i;
    if(a[i]==0)
    {
      if(sum<mi)
        sum=mi,kx=x,ky=y-1;
      x=i+1;
      mi=0;
    }
    else mi+=a[i];
  }
  if(sum<mi) kx=x,ky=y;
  return mp(kx,ky);
}
void solve()
{
  int n;
  cin>>n;

  int i,a[n];
  rep(i,0,n) cin>>a[i];
  int ans[n]={};
  int x=0,y=n-1;
  while(1)
  {

    int mi=minarry(a,x,y);
    rep(i,x,y+1) ans[i]+=mi;
    pair<int,int> temp=maxp(a,x,y);
    if(temp.first==-1) break;
    x=temp.first;
    y=temp.second;
  }
  for(auto i:ans) cout<<i<<" ";
  
}

main()
{
  //Skipped in presense of online judge.
  #ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt","r",stdin);
  freopen("/home/zeddie/Documents/output.txt","w",stdout);
  freopen("/home/zeddie/Documents/error.txt","w",stderr);
  #endif

  IOS()
  int t=1;
  //cin>>t;
  while(t--)
    solve();
}