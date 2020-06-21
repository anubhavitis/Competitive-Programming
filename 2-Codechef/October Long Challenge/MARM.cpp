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
  ll n,k;
  cin>>n>>k;
  ll a[n];
  for (int i = 0; i < n;i++)
  {
    cin>>a[i];
  }
  
  if(n%2 and k>n/2) a[n/2]=0;

  int dk=k%(3*n);
  for (int i = 0; i < dk; ++i)
    a[i%n]=a[i%n]^a[n-1-i%n];
  
  for(auto i:a)
    cout<<i<<" ";

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