#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p1,p2,k;
    cin>>t;
    int ans[t];
    for(int i=0;i<t;++i)
    {
        cin>>p1>>p2>>k;
        int sum=p1+p2,f=0;
        if((sum/k)%2==1) ans[i]=1;
        else ans[i]=0;
    }
    for(int i=0;i<t;++i)
        if(ans[i]) cout<<"COOK"<<endl;
        else cout<<"CHEF"<<endl;
    return 0;
}
