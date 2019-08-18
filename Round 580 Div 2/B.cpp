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
	int ni;
	cin>>ni;
	std::vector<int> p,n,z;
	int temp;
	for (int i = 0; i < ni; ++i)
	{
		cin>>temp;
		if(temp>0) p.pb(temp);
		else if(temp<0) n.pb(temp);
		else z.pb(temp);
	}
	int c=0;
	for (std::vector<int>::iterator i = p.begin(); i != p.end(); ++i)
	{
		c+=(*i-1);
	}
	for (std::vector<int>::iterator i =n.begin(); i !=n .end(); ++i)
	{
		c+=(*i*(-1)-1);	
	}
	for (std::vector<int>::iterator i = z.begin(); i != z.end(); ++i)
	{
		c++;
	}
	if(n.size()%2) c+=2;
	cout<<c<<"\n";


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