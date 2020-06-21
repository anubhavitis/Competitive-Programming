#include<bits/stdc++.h>

using namespace std;

unsigned long long int calc(unsigned long long int x)
{
    if(x>0) return x%10+calc(x/10);
    else return 0;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int x;
        cin>>x;
        cout<<x<<(10-calc(x)%10)%10<<"\n";
    }
    return 0;
}
