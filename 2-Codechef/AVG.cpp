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
        int n,k;
        ll v;
        cin>>n>>k>>v;
        ll sum=0,temp;
        for(int i=0;i<n;++i)
            {
                cin>>temp;
                sum+=temp;
            }
        temp=v*(n+k)-sum;
        if(temp>0 && temp%k==0) {cout<<temp/k<<"\n";}
        else cout<<"-1\n";
	}
}
