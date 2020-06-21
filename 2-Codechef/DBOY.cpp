//Mark XVII
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve()
{
  int n;
  cin>>n;
  int h[n],k[n];
  map<int,int> mm;
  for (int i = 0; i < n; ++i) cin>>h[i];
  for (int i = 0; i < n; ++i) 
  {
    cin>>k[i];
    mm[k[i]]=1;
  }
  int temp=(*(mm.begin())).first;
  int dp[2*n+1];
  
  for (int i = 1; i < 2*n+1; ++i)
  {
    if(mm[i]==1 or i<temp) { dp[i]=1; continue; }
    int back=dp[i-temp];
    for(auto x:mm)
    {
      if(x.first>i) break;
      back=min(back,dp[i-x.first]);
    }
    dp[i]=1+dp[back];
  }
  for (int i = 1; i < 2*n+1; ++i)
    cerr<<i<<" "<<dp[i]<<"\n";

  int sum=0;
  for (int i = 0; i < n; ++i)
    sum+=dp[2*h[i]];
  cout<<sum;

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
  {
    deb('\n')
    solve();
    cout<<"\n";
  }
}