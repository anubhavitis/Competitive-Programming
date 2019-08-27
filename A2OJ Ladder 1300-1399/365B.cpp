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
  int a[n];
  for (int i = 0; i < n; ++i)
  {
      cin>>a[i];
  }
  if(n<3)
  {
    cout<<n;
    return;
  }
  int c=0,temp=0;
  for (int i = 2; i < n; ++i)
    if(a[i]==a[i-1]+a[i-2])
        temp++;
    else 
    {
        c=max(temp,c);
        temp=0;
    }
  cout<<max(temp,c)+2;
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