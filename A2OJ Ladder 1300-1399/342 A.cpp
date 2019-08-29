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
    int n,a[8]={},temp;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>temp;
        a[temp]++;
    }
    deb(a[1])deb(a[2])deb(a[3])deb(a[4])deb(a[5])deb(a[6])deb(a[7])
    if(a[1]!=a[2]+a[3] or a[2]!=a[4]+a[6]-a[3] or a[3]>a[6] or a[5] or a[7])
    {
        cout<<"-1";
        return;
    }
    for (int i = 0; i < a[1]; ++i)
    {
        cout<<"1 ";
        if(a[2]) 
        { 
            cout<<"2 ";
            a[2]--;

            if(a[4]) { cout<<"4 \n"; a[4]--;  }
            else cout<<"6 \n";
        }
        else cout<<"3 6\n";
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