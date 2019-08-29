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

int p[1000001]={};
void prime()
{
    p[0]=p[1]=1;
    for (int i = 2; i*i<= 1000000; ++i)
    {
        if( p[i]==0 )
            for(int j=i*i;j<=1000000; j+=i)
                p[j]=1;
    }
}

void solve()
{
    ll n,temp;
    cin>>n;
    prime();
    unsigned ll a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        temp=sqrt(a[i]);
        if( temp*temp == a[i] && p[temp]==0) { cout<<"YES\n"; continue; }
        cout<<"NO\n";
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