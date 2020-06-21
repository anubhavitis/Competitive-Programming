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

// void get(int a[],int n)
// {
// 	for(int i=0;i<n;++i)
// 		cin>>a[i];
// }
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
    	int n;
    	cin>>n;
    	int a[n],b[n];
    	//get(a,n);
    	for(int i=0;i<n;++i)
			cin>>a[i];
    	//get(b,n);
		for(int i=0;i<n;++i)
			cin>>b[i];

    	int max=0,temp=0;
    	for (int i = 0; i < n; ++i)
    	{
    		temp=a[i]*20-b[i]*10;
    		if(temp>max) max=temp;
    	}

    	cout<<max<<"\n";
    }

}