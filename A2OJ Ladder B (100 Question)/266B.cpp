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
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    char temp;
    for (int ii = 0; ii < t; ++ii)
	{
		for (int i = 1; i < n; ++i)
		{
			if(s[i]=='G' && s[i-1]=='B')
			{	
				temp=s[i];
				s[i]=s[i-1];
				s[i-1]=temp;
				i++;
			}
		}
	}
    cout<<s<<"\n";

}