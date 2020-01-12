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
  int m,n;
  cin>>n>>m;
  int a[n][m],b[n][m];
  for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
      cin>>a[i][j];
  for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
      cin>>b[i][j];

  int rec1[501]={},rec2[501]={};
  for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
      if(a[i][j]!=b[i][j])
        rec1[j]++,rec2[i]++;
      
  // for(int j=0;j<m;++j)
  //   for(int i=0;i<n;++i)
  //     if(a[i][j]!=b[i][j])  
  //       rec2[i]++;
  for(int i=0;i<501;++i) if(rec2[i]) cerr<<i<<" "<<rec2[i]<<"\n";
  for(auto i:rec1) if(i%2) { cout<<"No"; return; }
  for(auto i:rec2) if(i%2) { cout<<"No"; return; }

  cout<<"Yes";
  return;

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