#include<iostream>
using namespace std;
int cou()
{
    int p,q;
    cin>>p>>q;
    return (p-1)*(q-1);
}
int main()
{
int t;
cin>>t;
int a[t];
for(int i=0;i<t;++i)
    a[i]=cou();
for(int i=0;i<t;++i)
    cout<<a[i]<<endl;
return 0;
}
