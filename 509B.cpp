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
  int n,k;
  cin>>n>>k;
  int a[n];
  std::vector<int> b;
  for(int i=0;i<n;++i) cin>>a[i],b.pb(a[i]);

  sort(all(b));
  int m2=ub(all(b),b[0])-b.begin();
  if(k<b[n-1]-b[m2-1]) { cout<<"NO"; return; }
  cout<<"YES\n";
  for(auto i:a)
  {
    for (int j = 0; j < i; ++j) cout<<max(1,j-b[m2-1]+1)<<" ";
    cout<<"\n";
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
    solve();
    cout<<"\n";
    deb('\n')
  }
}