#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	ll t;
	cin>>t;
	ll s[t];
	ll a[200000]={}; ll k=0;
	cin>>s[0];
	for(ll i=1;i<t;++i)
    {
        cin>>s[i];
        for(ll j=0;j<i;++j)
               a[s[i]+s[j]]+=1;
    }
    int ans=0;
    for(ll i=0;i<200000;++i)
        if(ans<a[i]) ans=a[i];
    cout<<ans;
}
