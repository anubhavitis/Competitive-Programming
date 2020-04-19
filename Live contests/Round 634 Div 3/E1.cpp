//Mark XXV
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

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j,k;
using namespace std;

void solve()
{
  int n;
  cin>>n;
  int a[n+1][27]={};
  int temp;
  int tot[27]={};
  rep(i,1,n+1)
  {
    cin>>temp;
    a[i][temp]++;
    tot[temp]++;
  }
  rep(i,1,n+1)
    rep(j,1,27) a[i][j]+=a[i-1][j];
  int sum=0;
  rep(i,1,n+1)
    rep(j,i,n+1)
    {
      int mx1=0,mx2=0;
      rep(k,1,27)
      {
        mx1=max(mx1,2*min(a[i-1][k],tot[k]-a[j][k]));
        mx2=max(mx2,a[j][k]-a[i-1][k]);
      }
      sum=max(sum,mx1+mx2);
    }
  cout<<sum<<endl;
  

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