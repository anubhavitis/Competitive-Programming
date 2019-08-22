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
	int b,p,f;
	cin>>b>>p>>f;
	int h,c;
	cin>>h>>c;
	b/=2;
	//if(!b) { cout<<"0\n"; return; }
	if(b>=p+f)
	{
		cout<<p*h+f*c<<"\n";
		return;
	}
	if(h>c)
	{
		if(b>=p)
		{
			cout<<p*h+(b-p)*c<<"\n";
			return;		
		}
		cout<<b*h<<"\n";
		return;
	}
	if(b>=f)
	{
		cout<<(b-f)*h+f*c<<"\n";
		return;		
	}
	cout<<b*c<<"\n";
	return;
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