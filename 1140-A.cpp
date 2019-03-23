#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin>>n;
	int sum=0,key=1,temp;
	for(int i=1;i<=n;++i)
    {
        cin>>temp;
        if(temp==i && key<=temp) sum++;
        else if(temp>key) key=temp;
    }
    cout<<sum;
}
