#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

	ll t;
	cin>>t;
	while(t--)
	{
        ll a;
        cin>>a;
        ll sum=0,i=1,d1=1,pmax=0,d2;
        while(1)
        {
            sum+=(a-pow(2,i-1));
            if( sum>pmax) { pmax=sum; d2=i;  }

            if(sum>0) d1=i;
            else break;

            i++;
        }
        cout<<d1<<" "<<d2<<"\n";
	}
}
