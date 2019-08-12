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
    int n,temp;
    cin>>n;
    int z=0,f=0;
    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	if(temp) f++;
    	else z++;
    }
    f-=f%9;
    if(!z) cout<<"-1"<<"\n";
    else if(f==0) cout<<"0\n";
    else
    {
    	for (int i = 0; i < f; ++i)
    	{
    		cout<<5;
    	}
    	for (int i = 0; i < z; ++i)
    	{
    		cout<<0;
    	}
    }



}