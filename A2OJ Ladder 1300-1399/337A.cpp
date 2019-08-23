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
    int n,m;
    cin>>n>>m;
    int f[m];
    for (int i = 0; i < m; ++i)
    {
        cin>>f[i];
    }
    sort(f,f+m);
    int mi=10001;
    for (int i = 0; i < m-n+1; ++i)
    {
        mi=min(mi,f[i+n-1]-f[i]);
    }
    cout<<mi;
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