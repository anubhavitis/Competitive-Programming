#include<bits/stdc++.h>
#define ll long long int
#define mod %1000000007
#define pb push_back
using namespace std;

int main()
{
    //Skipped in presense of online judge.
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    int a[3],d;
    cin>>a[0]>>a[1]>>a[2]>>d;
    sort(a,a+3);
    int sum=0;
    if(a[1]-a[0]<d) sum+=d-a[1]+a[0];
    if(a[2]-a[1]<d) sum+=d-a[2]+a[1];
    cout<<sum<<"\n";



}
