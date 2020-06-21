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
    int n;
    cin>>n;
    int temp,ans=0;
    std::vector<int> v;
    std::vector<int>::iterator it;
    for (int i = 0; i < n; ++i)
    {
      cin>>temp;
      it=ub(all(v),temp);
      if(it==v.end()) { v.pb(temp); continue;}
      ans+=v.end()-it;
      v.erase(it,v.end());
      v.pb(temp);
    }
    cout<<ans<<"\n";
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
  cin>>t;
	while(t--)
	{
		solve();
	}
}