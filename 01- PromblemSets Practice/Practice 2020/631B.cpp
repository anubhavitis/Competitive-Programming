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

int temp;

using namespace std;

void solve()
{
  int n,m,k;
  cin>>n>>m>>k;
  int r[n][2]={},c[m][2]={};
  int t,no,li;
  for (int i = 0; i < k; ++i)
  {
    cin>>t>>no>>li;
    if(t==1)
      r[no-1][0]=li,r[no-1][1]=i+1;
    else
      c[no-1][0]=li,c[no-1][1]=i+1;
  }

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      if(r[i][1]>c[j][1]) cout<<r[i][0]<<" ";
      else cout<<c[j][0]<<" ";
    }
    cout<<"\n";
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
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}