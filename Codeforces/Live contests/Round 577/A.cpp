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
    int n,m;
    cin>>n>>m;
    int a[m][5]={};
    string s;
    for (int i = 0; i < n; ++i)
    {
    	cin>>s;
    	for (int j = 0; j < m; ++j)
    	{
    		if(s[j]=='A') a[j][0]++;
    		else if(s[j]=='B') a[j][1]++;
    		else if(s[j]=='C') a[j][2]++;
    		else if(s[j]=='D') a[j][3]++;
    		else if(s[j]=='E') a[j][4]++;

    	}
    }
    
    int mark,mx,ans=0;
    for (int i = 0; i < m; ++i)
    {
    	cin>>mark;
    	mx=0;
    	for (int j = 0; j < 5; ++j)
    	{
    		if(a[i][j]>mx) mx=a[i][j];
    	}
    	ans+=mx*mark;
    }
    cout<<ans<<"\n";

}