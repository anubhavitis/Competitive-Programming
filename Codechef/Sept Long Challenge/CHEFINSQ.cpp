//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
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
  int n,k;
  cin>>n>>k;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  int c=1;
  
  int x=ub(a,a+n,a[k-1])-lb(a,a+n,a[k-1]);
  int y=k - ( lb(a,a+n,a[k-1])-a );
  
  __int128 an=1,an2=1;
  for (int i = 0; i < y; ++i)
  {
    an*=x-i;
    an2*=i+1;
  }

  cout<<ulong(an/an2)<<"\n";
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