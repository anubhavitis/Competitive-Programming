//Mark XVII
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr <<#x<<" "<<x<<"\"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve()
{
  int n,c,temp;
  cin>>n>>c;
  int a[100001]={};
  std::vector<int> v;
  for (int i = 0; i < n; ++i)
  {
    cin>>temp;
    a[temp]=1;
  }
  for (int i = 0; i < 100001; ++i)
    if(a[i]) v.pb(i);

  // for(auto i:v) cerr<<i<<" ";
  // cerr<<"\n";
  
  n=v.size();
  int l=0,r=n-1;
  int mid;
  int ans=INT_MAX;
  while(l<=r)
  {
    mid=(l+r)/2;
    if( (n-mid)*c >= v[mid-1] )
    {
      ans=min( ans, n - mid );
      l=mid+1;
    }
    else
      r=mid-1;

  }
    cout<<ans<<"\n";
    fflush(stdout);

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
    deb("-----")
    solve();
  }
}