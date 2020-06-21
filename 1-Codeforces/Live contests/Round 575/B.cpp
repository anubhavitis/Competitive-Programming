#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
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
 	int n,k;
 	cin>>t;
 	while(t--)
 	{
 		cin>>n>>k;
 		int a[n],sum=0,o=0;
 		std::vector<int> v;
 		for (int i = 0; i < n; ++i)
 		{
 			cin>>a[i];
 			if(a[i]%2) { o++; v.pb(i+1); }
 		}
 		deb(o)
 		if(o<k || o%2!=k%2) { cout<<"NO\n"; continue;	}
 		cout<<"YES\n";
 		for (std::vector<int>::iterator i = v.begin(); i != v.end() && k>1; ++i)
 		{
 			cout<<*i<<" ";
 			k--;
 		}
 		cout<<n<<"\n";

 	}   
    
}