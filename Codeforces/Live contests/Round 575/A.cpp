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
 	unsigned ll a,b,c,sum;
 	cin>>t;
 	while(t--)
 	{
 		cin>>a>>b>>c;
 		sum=a+b+c;
 		sum/=2;
 		cout<<sum<<"\n";
 	}   
    
}