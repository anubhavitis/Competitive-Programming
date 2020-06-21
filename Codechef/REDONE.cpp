#include<bits/stdc++.h>
using namespace std;
#define ll int
#define FastIO() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

main()
{
	FastIO()

	ll t,n,temp;
	ll a[1000000];
	a[0]=1;
	for(ll i=1;i<1000001;++i){
		a[i]=a[i-1]+i+1+a[i-1]*(i+1);
		a[i]%=1000000007;
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<a[n-1]<<"\n";
	}
}
