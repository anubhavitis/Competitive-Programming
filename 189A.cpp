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
  int n,m[3];
  cin>>n>>m[0]>>m[1]>>m[2];

  int k[n+1];
  k[0]=0;
  for(int i=1;i<n+1;++i) k[i]=-1*INT_MAX;

  for (int j = 0; j < 3; ++j)
  {

	  for (int i = m[j]; i < n+1; ++i)
	  {
	  	k[i]=max(k[i],k[i-m[j]]+1);
	  }
  }
  cout<<k[n];
  for (int i = 0; i < 101; ++i)
  {
  	cerr<<i<<" "<<k[i]<<"\n";
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
    deb('\n')
    solve();
    cout<<"\n";
  }
}