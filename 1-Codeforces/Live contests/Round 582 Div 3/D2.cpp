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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  int cnt,dup;
  map < int, std::vector<int> > dp;
  for (int i = 0; i < n; ++i)
  {
    dup=a[i];
    cnt=0;
    while(dup)
    {
      dp[dup].pb(cnt);
      cnt++;
      dup/=2;
    }
  }
  string tt= string(5, "abc");
  deb(tt)
  int ans=INT_MAX;
  for(auto i : dp)
  {
    int key=i.first;
    std::vector<int> v=i.second;

    if(v.size()<k) continue;
    sort(all(v));
    ans=min(ans,accumulate(v.begin(),v.begin()+k,0));
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
  int t=1;
  //cin>>t;
	while(t--)
	{
		solve();
	}
}