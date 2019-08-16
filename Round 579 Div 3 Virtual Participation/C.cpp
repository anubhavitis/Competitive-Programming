#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define e() <<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int primeFactors(int n)  
{  
    int c=0;
    while (n % 2 == 0)  
    {  
        c++;
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
        while (n % i == 0)  
        {  
            c++;
            n = n/i;  
        }
    if (n > 2)  
        c++;
    
    return c;  

}  

int gcd(int a, int b)
{
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a==0) return b;
    return gcd(a,b%a);
}

int main()
{
    //Skipped in presense of online judge.
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    IOS()
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int g=a[0];
    for (int i = 1; i < n; ++i)
    {
        cin>>a[i];
        g=gcd(a[i],g);
    }
    deb(g)
    cout<<pow(2,primeFactors(g)) e()

}