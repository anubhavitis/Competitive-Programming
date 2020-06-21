#include<iostream>
using namespace std;
int cou()
{
    int a;
    cin>>a;
    int t;
    if(a%2==0)
        t=a-2;
    else
        t=a-3;
    t/=2;
    return (t*(t+1))/2;

}
int main()
{
    int t;
    cin>>t;
    int l[t];
    for(int i=0;i<t;++i)
        l[i]=cou();
    for(int i=0;i<t;++i)
        cout<<l[i]<<"\n";
}
