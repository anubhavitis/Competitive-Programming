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

int main()
{
    //Skipped in presense of online judge.
    #ifndef ONLINE_JUDGE
    freopen("/home/zeddie/Documents/input.txt","r",stdin);
    freopen("/home/zeddie/Documents/output.txt","w",stdout);
    freopen("/home/zeddie/Documents/error.txt","w",stderr);
    #endif

    IOS()
    int n;
    cin>>n;
    ll x;
    ll g=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        g=__gcd(g,x);
    }

    ll c=0;
    deb(g)
    for (ll i = 1; i*i<=g; ++i)
    {
        if(g%i==0) c++;
        if(g%i==0 and g/i!=i) c++;
    }
    cout<<c<<"\n";

}