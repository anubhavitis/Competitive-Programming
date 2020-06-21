#include<iostream>
using namespace std;
char che()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        return '>';
    else if(a<b)
        return '<';
    else
        return '=';
}
int main()
{
    int t;
    cin>>t;
    char a[t];
    for(int i=0;i<t;++i)
        a[i]=che();
    for(int i=0;i<t;++i)
        cout<<a[i]<<endl;
    return 0;
}
