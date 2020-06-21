//Mark XIV
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
  int n,m,q;
  cin>>n>>m>>q;
  int a[n]={},b[m]={};
  int x,y;
  for (int i = 0; i < q; ++i)
  {
    cin>>x>>y;
    a[x-1]++;
    b[y-1]++;
  } 
  
  ll ci,co,ri,ro;
  ci=co=ri=ro=0;
  
  for (int i = 0; i < n; ++i)
    if(a[i]%2) ri++;
    else ro++;
  for (int i = 0; i < m; ++i)
    if(b[i]%2) ci++;
    else co++;
  cout<<ri*co+ro*ci<<"\n";

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
    solve();
  }
}