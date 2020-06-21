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
    	int c[n],h[n],a[n]={};
    	for (int i = 0; i < n; ++i) cin>>c[i];
    	for (int i = 0; i < n; ++i) cin>>h[i];

    	for (int i = 0; i < n; ++i)
    	{
    		if(i-c[i]<0) a[0]++;
    		else a[i-c[i]]++;

    		if(i+c[i]<n-1) a[i+c[i]+1]--;
	    }
    	for (int i = 1; i < n; ++i)
    		a[i]+=a[i-1];
    	
    	for (int i = 0; i < n; ++i)
    		cerr<<a[i]<<" ";

    	sort(a,a+n);
    	sort(h,h+n);
    	int f=1;
    	for (int i = 0; i < n; ++i)
    		if(a[i]!=h[i]){
    			f--;
    			break;
    		}
    	if(f) cout<<"YES\n";
    	else cout<<"NO\n";

    }

}