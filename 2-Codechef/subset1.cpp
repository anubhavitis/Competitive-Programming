#include<bits/stdc++.h>
using namespace std;
int n;

void print(int x,char a[])
{
	cout<<"{ ";

	for(int i=n-1;i>=0 && x;--i)
	{
		if(x%2==1) cout<<a[i]<<" ,";
		x/=2;
	}

	cout<<"\b }\n";
}

main()
{
	cout<<"Enter length of set.\n";
	cin>>n;
	char a[n];
	for(int i=0;i<n;++i) cin>>a[i];

	int temp=pow(2,n);
	for(int i=0;i<temp;++i) print(i,a);

}
