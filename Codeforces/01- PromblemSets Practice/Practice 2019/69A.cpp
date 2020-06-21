#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
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
    int n,sx=0,sy=0,sz=0,x,y,z;
    cin>>n;
    while(n--)
    {
    	cin>>x>>y>>z;
    	sx+=x;
    	sy+=y;
    	sz+=z;
    }
    if(!sz && !sx && !sy) cout<<"YES\n";
    else cout<<"NO\n";
}