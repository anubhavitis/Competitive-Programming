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
    ll n,m;
    cin>>n>>m;
    ll temp=n/m;
    ll ans=0;
    if((m%10)%2==0 and (m%10)!=0)
    {
      ans=40*(temp/10);
    }
    else if((m%10)==5)
    {
      ans=25*(temp/10);
    }
    else if((m%10)%2!=0)
    {
      ans=45*(temp/10);
    }
    temp%=10;
    m%=10;
    for (int i = 1; i <=temp; ++i)
    {
      ans+=(m*i)%10;
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