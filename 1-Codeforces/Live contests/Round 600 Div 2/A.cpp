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
  }
  int temp;
  for (int i = 0; i < n; ++i)
  {
    cin>>temp;
    a[i]-=temp;
  }
  std::vector<int> v;
  if(a[0]!=0) v.pb(a[0]);
  for (int i = 1; i < n; ++i)
  {
    if(a[i]!=a[i-1] and a[i]!=0) v.pb(a[i]);
  }
  for(auto i:v) cerr<<i<<" ";
  if(v.size()==1 and v[0]<0) cout<<"YES";
  else if(v.size()==0) cout<<"YES";
  else cout<<"NO";
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
    cout<<"\n";
    deb('\n')
  }
}