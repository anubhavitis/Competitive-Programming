#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll t,i;
	cin>>t;
	ll a[t],temp;
	for(i=0;i<t;++i) cin>>a[i];

	ll sum=temp=a[t-1];
	for(i=t-2;i>=0;--i)
    {
        if(temp==0) break;
        if(a[i]<temp) temp=a[i];
        else temp--;
        sum+=temp;
    }

    cout<<sum;
}
