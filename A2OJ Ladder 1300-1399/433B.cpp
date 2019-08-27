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
    ll a[n+1],b[n+1],c[n+1];
    b[0]=0;
    c[0]=0;
    for (int i = 1; i < n+1; ++i)
    {
        cin>>a[i];
        b[i]=a[i]+b[i-1];
    }

    sort(a+1,a+n+1);
    for (int i = 1; i < n+1; ++i)
    {
        c[i]=c[i-1]+a[i];
    }
    int m,type,l,r;
    cin>>m;
    for (int i = 0; i < n+1; ++i)
    {
        cerr<<a[i]<<" ";
    }
    cerr<<"\n";
    for (int i = 0; i < n+1; ++i)
    {
        cerr<<b[i]<<" ";
    }
    cerr<<"\n";
    for (int i = 0; i < n+1; ++i)
    {
        cerr<<c[i]<<" ";
    }
    for (int i = 0; i < m; ++i)
    {
        cin>>type>>l>>r;
        if(type==1) cout<<b[r]-b[l-1]<<"\n";
        else cout<<c[r]-c[l-1]<<"\n";
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