//Mark XXII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(int i=b; i<c; ++i)
using namespace std;

void solve()
{
  int n,m;
  cin>>n>>m;
  int a[n][m];
  vector<int> rf(n,-1),rl(n,-1),cf(m,-1),cl(m,-1);
  
  rep(i,0,n)
    rep(j,0,m)
    {
      cin>>a[i][j];
      if(a[i][j])
      {
        rl[i]=j;
        cl[j]=i;
        if(rf[i]==-1) rf[i]=j;
        if(cf[j]==-1) cf[j]=i;
      }
    }

  ll cnt=0;
  rep(i,0,n)
    rep(j,0,m)
      if(a[i][j]==0)
      {
        if(cf[j]<i and cf[j]!=-1) cnt++;
        if(rf[i]<j and rf[i]!=-1) cnt++;
        if(cl[j]>i) cnt++;
        if(rl[i]>j) cnt++;
      }
  cout<<cnt<<endl;
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