#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int t;
    cin>>t;
    long long int bit[t],nib[t],byt[t],b1,b2,b3;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        b1=pow(2,(n-1)/26);b2=b3=0;
        n=(n-1)%26 + 1;
        for(int j=1;j<=n;j++)
        {
            if(j==3) {b2=b1; b1=0;}
            if(j==11){b3=b2; b2=0;}
        }
        bit[i]=b1;  nib[i]=b2; byt[i]=b3;

    }
    for(int i=0;i<t;++i)
        cout<<bit[i]<<" "<<nib[i]<<" "<<byt[i]<<endl;
    return 0;
}
