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
  int m;
  cin>>m;

  int a[m];
  ll s[m];
  for (int i = 0; i < m; ++i)
    cin>>a[i];
  sort(a,a+m,big(int));
  s[0]=a[0];
  for (int i = 1; i < m; ++i)
    s[i]=a[i]+s[i-1];

  deb(m)
  deb(s[m-1])
  ll ans=s[m-1];
  while(m>1)
  {
    m>>=2;
    deb(m)
    ans+=s[m-1];
  }

  cout<<ans;

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