//Mark XVIII
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

using namespace std;

void solve()
{
  int n,mo,x,y;
  cin>>n>>mo;
  map<int,int> m;
  std::vector<int> v;
  for (int i = 0; i < mo; ++i)
  {
    cin>>x>>y;
    m[y]=x;
    v.pb(y);
  }

  sort(all(v),big(int));
  ll ans=0;
  for(auto i:v)
  {
    ans+=min(n,m[i])*i;
    n-=m[i];
    if(n<=0) break;
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