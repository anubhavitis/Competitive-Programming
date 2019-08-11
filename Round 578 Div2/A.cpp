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
    int n;
    string s,ans="0000000000";
    cin>>n>>s;
    for (int i = 0; i < n; ++i)
    {
    	if(s[i]=='L')
    		for (int j = 0; j < 10; ++j)
				if(ans[j]=='0')
				{
					ans[j]='1';
					break;
				}
		if(s[i]=='R')
    		for (int j = 9; j >=0; --j)
				if(ans[j]=='0')
				{
					ans[j]='1';
					break;
				}
		if(s[i]>='0' && s[i]<='9')
			ans[s[i]-48]='0';
    }
	cout<<ans<<"\n";

}