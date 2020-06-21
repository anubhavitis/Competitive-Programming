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
	string s,t;
	   cin>>s>>t;
	   int ls,lt;
	   ls=s.length();
	   lt=t.length();
	   int si=0,S=0,i,j=0;
	   for (i = 0; i < ls && j<lt; i++)
	   {
	   		if(s[i]==t[j])
	   		{
	   			S=max(si,S);
	   			si=0;
	   			j++;
	   		}
	   		else 
	   		{
	   			si++;
	   		}
	   }
	   if(i<ls) S=max(ls-i,S);
	   cout<<S<<"\n";
	
}

int main()
{
    //Skipped in preselse of online judge.
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

