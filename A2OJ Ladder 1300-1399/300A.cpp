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
    int ni;
    cin>>ni;
    int temp;
    std::vector<int> p,n,z;
    for (int i = 0; i < ni; ++i)
    {
        cin>>temp;
        if(temp<0) n.pb(temp);
        else if(temp>0) p.pb(temp);
        else z.pb(temp);
    }
    if(n.size()%2==0) { z.pb(n[0]); n.erase( n.begin(),n.begin()+1 ); }
    if(p.size()==0) { p.pb(n[0]); p.pb(n[1]); n.erase( n.begin(), n.begin()+2); }

    cout<<n.size()<<" ";
    for (std::vector<int>::iterator i = n.begin(); i != n.end(); ++i)
    {
        cout<<*i<<" ";
    }
    cout<<"\n"<<p.size()<<" ";
    for (std::vector<int>::iterator i = p.begin(); i != p.end(); ++i)
    {
        cout<<*i<<" ";
    }
    cout<<"\n"<<z.size()<<" ";
    for (std::vector<int>::iterator i = z.begin(); i != z.end(); ++i)
    {
        cout<<*i<<" ";
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