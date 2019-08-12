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
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m,k;
    	cin>>n>>m>>k;
    	int a[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>a[i];
    	}
    	string ans="YES\n";
    	for (int i = 0; i < n-1; ++i)
    	{
    		if(a[i+1]-a[i]==k) continue;
    		else if(a[i+1]-a[i]<k)
    		{
    			if(a[i+1]-k<0)
    				m+=a[i];
    			else
    				m+=a[i]-a[i+1]+k;
    			deb(m)
    			continue;
    		}
    		else
    		{
    			if(a[i+1]-a[i]-k<=m)
    			{
    				m-=a[i+1]-a[i]-k;
    				deb(m)
    				continue;
    			}
    			else
    			{
    				ans="NO\n";
    				break;
    			}

    		}
    	}
    	cout<<ans;
    }
}