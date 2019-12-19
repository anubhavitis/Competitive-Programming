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
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<'0';
        return;
    }
    int c=1,sum=0;
    for (int i = 0; i < s.length(); ++i)
    {
        sum+=s[i]-48;
    }
    while(sum/10)
    {
        int dup=sum;
        sum=0;
        while(dup)
        {
            sum+=dup%10;
            dup/=10;
        }
        c++;
    }
    cout<<c;
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