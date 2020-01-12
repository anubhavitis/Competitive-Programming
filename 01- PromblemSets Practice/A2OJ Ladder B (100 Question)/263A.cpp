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

    int i,j,temp=0;
    for(i=-1;i<5 && !temp;++i)
    	for(j=0;j<5;++j)
		{
			cin>>temp;
			if(temp) break;
		}

    deb(i)deb(j)
    cout<<abs(i-2)+abs(j-2)<<"\n";
}