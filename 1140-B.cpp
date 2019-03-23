#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t,n,j;
	cin>>t;
	while(t--)
	{
        cin>>n;
        char ch[n];
        for(int i=0;i<n;++i)
            cin>>ch[i];
        j=0;
        if(ch[0]=='<' && ch[n-1]=='>')
                for(j=1;j<n;++j)
                    if(ch[j]=='>' || ch[n-j-1]=='<') break;
        cout<<j<<"\n";
	}
}
