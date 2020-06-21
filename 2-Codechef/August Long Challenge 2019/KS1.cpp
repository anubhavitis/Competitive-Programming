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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    IOS()
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        
        map<ll, vector<ll> > m;
        m[0].pb(-1);
        ll x=0;
        for (int i = 0; i < n; ++i)
        {
            x=x^a[i];
            m[x].pb(i);
        }

        ll sum=0;
        for (auto i = m.begin(); i != m.end(); ++i)
        {
            vector<ll> v=i->second;
            ll s=v.size();       
            x=(-1)*(s-1);
            for (auto ii = v.begin(); ii != v.end(); ++ii)
            {
                sum+=x*(*ii);
                x+=2;
            }
            sum-=(s*(s-1))/2;
        }
        cout<<sum<<"\n";

    }
}
