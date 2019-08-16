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

int main()
{
    //Skipped in presense of online judge.
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    IOS()
    int q;
    cin>>q;
    while(q--)	
    {
        int n;
        cin>>n;
        int a[4*n];
        for (int i = 0; i < 4*n; ++i)
           {
               cin>>a[i];
           }   
        sort(a,a+4*n);
        int area=a[0]*a[4*n-1];
        if(a[0]!=a[1] || a[4*n-1]!=a[4*n -2] ) area=-1;
        else
            for (int i = 3; i <= (4*n-1)/2; i+=2)
            {
                if(a[i-1]!=a[i] || a[4*n -i]!= a[4*n-1-i] )
                {
                    area=-1;
                    break;
                }
                if(a[i]*a[4*n-i-1]!=area){ area=-1; break;}
            }
        if(area==-1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}