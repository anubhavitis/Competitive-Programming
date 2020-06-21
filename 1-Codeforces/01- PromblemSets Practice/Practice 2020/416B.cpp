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

void solve()
{
  int m,n;
  cin>>m>>n;
  int a[m][n],b[n];
  for(int i=0;i<m;++i)
    for(int j=0;j<n;++j)
    {
      cin>>b[j];
      if(i==0) a[i][j]=j>0? a[i][j-1]+b[j]:b[j];
      else
        a[i][j]=j>0? max(a[i-1][j],a[i][j-1])+b[j]:a[i-1][j]+b[j];
    }
  for(int i=0;i<m;++i)
    cout<<a[i][n-1]<<" ";
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