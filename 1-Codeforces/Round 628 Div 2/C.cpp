//Mark XXI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(a,b,c) for(int i=a; i<b; i+=c)
using namespace std;

void solve()
{
  int n;
  cin>>n;
  int a[n][2],deg[n]={},mex=-1;
  rep(0,n-1,1)
  {
    cin>>a[i][0]>>a[i][1];
    deg[a[i][0]]++;
    deg[a[i][1]]++;
    if(deg[a[i][1]]==3) mex=a[i][1];
    if(deg[a[i][0]]==3) mex=a[i][0];
  }
  deb(mex)
  if(mex==-1)
    rep(0,n-1,1) cout<<i<<endl;
  else
  {
    int r=0,l=n-2;
    rep(0,n-1,1)
      if(a[i][0]==mex or a[i][1]==mex) cout<<r++<<endl;
      else cout<<l--<<endl;
  }

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