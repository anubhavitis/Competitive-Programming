#include<iostream>
using namespace std;
int roo()
{
    int a,b;
    cin>>a>>b;
    return a%b;
}
int main()
{
    int l;
    cin>>l;
    int a[l];
    for(int i=0;i<l;++i)
        a[i]=roo();
    for(int i=0;i<l;++i)
        cout<<a[i]<<endl;
}
