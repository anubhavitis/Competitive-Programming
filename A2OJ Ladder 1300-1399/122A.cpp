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

bool check(int n)
{
    while(n)
    {
        if(n%10!=4 and n%10!=7)
            return false;
        n/=10;
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    for (int i = 1; i < n+1; ++i)
    {
        if(check(i))
        if(n%i==0)
        {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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