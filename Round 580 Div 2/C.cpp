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
	if(n%2==0) { cout<<"NO\n"; return ; }
	cout<<"YES\n";
	int a[2*n];
	for (int i = 0,j=0; i < 2*n; ++i)
	{
		a[j]=++i;
		j+=n;
		j%=(2*n);
		a[j]=i+1;
		j--;
	}
	for (int i = 0; i < 2*n; ++i)
	{
		cout<<a[i]<<" ";
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
    int t=1;
    //cin>>t;
	while(t--)
	{
		solve();
	}
}