//Mark XIX
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

int t1,t2;

using namespace std;
int cnt(char p[4],char a[4][101][101],int n)
{
  int c=0;
  for(int x=0;x<4;++x)
    for(int i=0;i<n;++i)
      for(int j=0;j<n;++j)
        if((i+j)%2 and a[x][i][j]==p[x]) c++;
        else if((i+j)%2==0 and a[x][i][j]!=p[x]) c++;\
  return c;
}
void solve()
{
  int n;
  cin>>n;
  char a[4][101][101];
  for(int x=0;x<4;++x)
    for(int i=0;i<n;++i)
      for(int j=0;j<n;++j)
        cin>>a[x][i][j];
  char p[]={'0','0','1','1'};
  int ans=INT_MAX,t=6;
  while(t--)
  {
    cerr<<p[0]<<p[1]<<p[2]<<p[3]<<"\n";
    ans=min(ans,cnt(p,a,n)),deb(ans);
    next_permutation(p,p+4);
  }
  cout<<ans;  


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
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}