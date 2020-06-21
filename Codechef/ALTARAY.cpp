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
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    if(a[i]<0) a[i]=-1;
    else a[i]=1;
  }
  ll ans[n];
  ans[n-1]=1;
  for(int i=n-2;i>-1;--i)
  {
    if(a[i+1]*a[i]<0) ans[i]=ans[i+1]+1;
    else if(a[i+1]*a[i]==0)
    {
      if(a[i]==0 and a[i+1]<0) ans[i]=ans[i+1]+1;
      else if(a[i]<0 and a[i+1]==0) ans[i]=ans[i+1]+1;
      else ans[i]=1;
    }
    else ans[i]=1;
  }
  for (int i = 0; i < n; ++i)
  {
    cout<<ans[i]<<" ";
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