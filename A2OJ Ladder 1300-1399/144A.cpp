#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

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
    int min,minp,max,maxp,temp;
    min=101;
    max=0;
    minp=maxp=0;
    for(int i=0;i<n;++i)
    {
        cin>>temp;
        if(temp>max) {  max=temp; maxp=i;  }
        if(temp<=min) {minp=i; min=temp;   }
    }
    deb(minp);deb(maxp);

    int ans=maxp+(n-minp-1);
    if(ans>=n) ans--;
    cout<<ans<<"\n";

}