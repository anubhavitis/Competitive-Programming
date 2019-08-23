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
    int a[n][m];
    int b[n][m]={};
    int temp;
    std::vector< pair<int,int> > v;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = 0; j < m-1; ++j)
        {
            if(a[i][j]==1 and  a[i+1][j]==1 and a[i][j+1]==1 and a[i+1][j+1]==1)
            {
                b[ i ][ j ]=1;
                b[i+1][ j ]=1;
                b[ i ][j+1]=1;
                b[i+1][j+1]=1;
                v.pb(mp(i+1,j+1));
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(a[i][j]!=b[i][j])
            {
                cout<<"-1\n";
                return;
            }
        }
    }
    pair<int,int> x;
    cout<<v.size()<<"\n";
    for (std::vector< pair<int,int> >::iterator i = v.begin(); i != v.end(); ++i)
    {
        x=*i;
        cout<<x.first<<" "<<x.second<<"\n";
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