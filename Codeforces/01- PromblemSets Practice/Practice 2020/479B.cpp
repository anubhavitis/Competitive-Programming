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
  int n,k; 
  cin>>n>>k;
  int a[n],x=0;
  for(int i=0;i<n;++i) cin>>a[i];
  int ans[10001][2];
  while(*max_element(a,a+n)-*min_element(a,a+n) and x<k)
  {
    ans[x][0]=max_element(a,a+n)-a+1;
    ans[x][1]=min_element(a,a+n)-a+1;
    a[ans[x][0]-1]--;
    a[ans[x++][1]-1]++;

  }
  cout<<*max_element(a,a+n)-*min_element(a,a+n)<<" "<<x<<"\n";
  for (int i = 0; i < x; ++i)
    cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
  
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