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
  ll a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }

  ll lmax[n],lmin[n],rmax[n],rmin[n];
  ll slmax[n],slmin[n],srmax[n],srmin[n];
  lmax[0]=lmin[0]=slmax[0]=slmin[0]=a[0];
  rmax[n-1]=rmin[n-1]=srmax[n-1]=srmin[n-1]=a[n-1];
  for (int i = 1; i < n; ++i)
  {
    lmax[i]=max(a[i],a[i]+lmax[i-1]);
    lmin[i]=min(a[i],a[i]+lmin[i-1]);
    rmax[n-1-i]=max(a[n-1-i],a[n-1-i]+rmax[n-1-i+1]);
    rmin[n-1-i]=min(a[n-1-i],a[n-1-i]+rmin[n-1-i+1]);
    slmin[i] = min(lmin[i],lmin[i-1]);
    slmax[i] = max(lmax[i],lmax[i-1]);
    srmin[n-1-i] = min(rmin[n-1-i],rmin[n-1-i+1]);
    srmax[n-1-i] = max(rmax[n-1-i],rmax[n-1-i+1]);
  }
  for (int i = 0; i < n; ++i)
  {
    cerr<<srmax[i]<<" ";
  }
  cerr<<"\n";
  for (int i = 0; i < n; ++i)
  {
    cerr<<slmin[i]<<" ";
  }
  ll ans=max(srmax[1]-slmin[0],slmax[0]-srmin[1]);
  for (int i = 1; i < n-1; ++i)
  {
      ans=max(ans,max(srmax[i+1]-slmin[i],slmax[i]-srmin[i+1]) );
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
  cin>>t;
  while(t--)
  {
    deb('\n')
    solve();
    cout<<"\n";
  }
}

































