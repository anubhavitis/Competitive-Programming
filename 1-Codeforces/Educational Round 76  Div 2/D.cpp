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
  int a[n];
  for (int i = 0; i < n; ++i) cin>>a[i];
    
  int m;
  cin>>m;
  int p[m],s[m];
  int dps[n+1]={}
  for (int i = 0; i < m; ++i)
  {
    cin>>p[i]>>s[i];
    dps[s[i]]=max(dps[s[i]],p[i]);
  }
  for(int i=n-1;i>=0;--i)
    dps[i]=max(dps[i],dps[i+1]);

  int ans=0,h1=0,cnt=0;
  int l=0,r=n-1;
  for (int i = 0; i < n; ++i)
  {
    
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
  cin>>t;
  while(t--)
  {
    deb('\n')
    solve();
    cout<<"\n";
  }
}