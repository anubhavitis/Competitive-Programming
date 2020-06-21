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

    int t;
    string s;
    cin>>t;
    while(t--)
    {
    	cin>>s;
    	int sum=0;
    	for (int i = 0; i < s.length(); ++i)
    		if(s[i]=='1') sum++;
    	if(sum%2) cout<<"WIN\n";
    	else cout<<"LOSE\n"; 
    }
}