#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

    ll n;
    cin>>n;
	char ch;
	ll sum=0;
	for(int i=0;i<n;++i)
	{
	    cin>>ch;
	    if(ch%2==0) sum+=(i+1);
	}
	cout<<sum;

}
