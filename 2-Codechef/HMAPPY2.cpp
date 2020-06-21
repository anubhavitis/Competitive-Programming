#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if(a==b) return a;
    if(a==0 || b==0) return 0;
    if(a>b) return gcd(a-b,b);
    return gcd(a,b-a);
}
main()
{
    long long int t,n,a,b,k,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>k;
        long long int g=(a*b)/gcd(a,b);
        sum=n/a + n/b - 2*(n/g);
        if(sum>=k) cout<<"Win\n";
        else cout<<"Lose\n";
    }
}
