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
  cin>>t1>>t2;
  int a[t1][t1];
  int cnt=1;
  for(int i=0;i<t1;++i)
    for(int j=0;j<t2-1;++j)
      a[i][j]=cnt++;
  ll sum=(t1*(2*cnt+(t1-1)*(t1-t2+1)))/2;
  for(int i=0;i<t1;++i)
    for(int j=t2-1;j<t1;++j)
      a[i][j]=cnt++;
  cout<<sum<<endl;
  for(int i=0;i<t1;++i)
    { for(int j=0;j<t1;++j)
        cout<<a[i][j]<<" ";
      cout<<endl; }
  
  
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