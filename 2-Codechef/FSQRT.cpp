#include<iostream>
#include<math.h>
using namespace std;
int roo()
{
    int a;
    cin>>a;
    return int(sqrt(a));
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
