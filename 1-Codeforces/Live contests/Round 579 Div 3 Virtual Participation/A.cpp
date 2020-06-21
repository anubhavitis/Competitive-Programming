#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define e() <<"\n";
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
    int q;
    cin>>q;
    while(q--)	
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>a[i];
    	}
    	int ans=1;
    	for (int i = 0; i < n-1; ++i)
    	{
    		if (abs(a[i]-a[i+1])!=1)
    		{
    			if( (a[i]==1 && a[i+1]==n) || (a[i]==n && a[i+1]==1) ) continue;
    			else {ans--; break;}
    		}
    	}
    	if(ans) cout<<"YES\n";
    	else cout<< "NO\n";	
    }
}