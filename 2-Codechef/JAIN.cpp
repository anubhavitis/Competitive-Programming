#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int bin(int i,int j)
{
    int ti,tj;
    int tot=0;
    for(int k=0;k<5;++k)
    {
        ti=ti%2;
        	ti/=2;
        tj=tj%2;
        	tj/=2;
        if(ti||tj) tot++;
    }
    if(tot==5) return 1;
    return 0;
}
main()
{
	int t,n;
	string str;
	cin>>t;
	while(t--)
    {
		cin>>n;
		ll ar[32];

		for(int i=0;i<32;++i)   ar[i]=0;
		while(n--)
        {
			cin>>str;
			int a=0,e=0,i=0,o=0,u=0;
			for(int ii=0;str[ii]!='\0';++ii)
			{
				if(str[ii]=='a')    a=1;
				if(str[ii]=='e')    e=1;
				if(str[ii]=='o')    o=1;
				if(str[ii]=='i')     i=1;
				if(str[ii]=='u')    u=1;
			}
			int pos=16*a + 8*e + 4*i + 2*o + 1*u;
            ar[pos]++;
		}
		ll ans=0;
		for(int i=1;i<32;++i)
		{
			if(i==31)
				ctr+=(ar[i]*(ar[i]-1))/2;
			for(int j=i+1;j<32;++j)
			{
                 if(bin(i,j)==true)
                 	ans+=ar[i]*ar[j];
			}
		}
			cout<<ans<<endl;
	}
}
