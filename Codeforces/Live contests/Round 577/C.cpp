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
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    sort(a,a+n);
    int pre[n];
    for (int i = n/2; i < n-1; ++i)
    {
    	pre[i]=(a[i+1]-a[i]);
    }
    int i;
	for (i = 0; i < n/2 && k>0; ++i)
	{
		if(pre[n/2+i]!=0)
		{
			a[n/2]+=pre[n/2+i];
			k-=(i+1)*pre[n/2+i];
			pre[n/2+i]=0;
		}
	}
	deb(k)deb(a[n/2])
	if(k==0) cout<<a[n/2]<<"\n";
	else if(k<0) cout<<a[n/2]/i + k%i<<"\n";
	else cout<<a[n/2]+k/(n/2+1)<<"\n";

}