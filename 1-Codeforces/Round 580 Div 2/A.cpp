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
	int n,m,mxn=0,mxm=0,temp;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		mxn=max(mxn,temp);
	}
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		cin>>temp;
		mxm=max(mxm,temp);
	}
	cout<<mxn<<" "<<mxm<<"\n";
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