#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	int t;
	cin>>t;
	while(t--)
	{
        ll n;
        cin>>n;
        ll a[n];
        ll sump=0,sumn=0,p=0,np=0;
        for(ll i=0;i<n;++i) {
                cin>>a[i];
                if(a[i]>0) { sump+=0; p++; }
                else  { sumn+=0; np++; }
        }
        if(p==n || np==n)
            cout<<n<<" "<<n<<"\n";
        else
            cout<<((p>np)?p:np)<<" "<<((p<np)?p:np)<<"\n";

	}
}
