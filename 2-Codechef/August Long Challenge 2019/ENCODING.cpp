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

ll exmod(ll x,ll p)
{
	if(p==0) return 1;
	while(--p)
	{
		x=(((x)mod)*((x) mod))mod;
	}
	return x;
}

ll rmod(string s,int n)
{
	ll sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum=sum*10+s[i]-48;
		sum=sum mod;
	}
    //cerr<<"Hi "<<((sum*((sum+1)mod))/2)mod<<"\n";
	return ((sum*((sum+1)mod))/2)mod;
}

ll smod(string s, int n)
{
	ll temp;
	ll sum=0;
	if(s[0]>=s[1])
		sum+=( ( (exmod(10,n-2) mod)*(exmod(10,n-2) mod) )*(((s[0]-49)*(s[0]-48))/2) )mod;
	else
		sum+=( ( (exmod(10,n-2) mod)*(exmod(10,n-2) mod) )*(((s[0]-48)*(s[0]-47))/2) )mod;
    //deb(sum)
	for (int i = 2; i < n; ++i)
    	{
			temp=0;
			for (int j= 0; j< i-1; ++j)
			{
				temp=(temp*10+(s[j]-48))mod;
			}
			sum+=(((temp*(( exmod(10,n-i-1) * exmod(10,n-i-1) ) mod ))mod)*45)mod;
            //deb(sum)
    		if(s[i]>=s[i-1])
    		{
    			sum+=((( exmod(10,n-i-1) * exmod(10,n-i-1) ) mod )*(((s[i-1]-48)*(s[i-1]-47))/2))mod;
    		}
    		else
    		{
    			sum+=((( exmod(10,n-i-1) * exmod(10,n-i-1) ) mod )*(((s[i-1]-49)*(s[i-1]-48))/2))mod;	
    		}
            //deb(sum)
    	}
    return sum;
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
    int t,nl,nr;
    cin>>t;
    string l,r;
    while(t--)
    {
    	cin>>nl>>l>>nr>>r;
    	ll suml,sumr,SL,SR;
    	suml =smod(l,nl);
    	sumr =smod(r,nr);
    	SL   =rmod(l,nl);
    	SR 	 =rmod(r,nr);
    	cout<<SL-suml;
    	cout<<"\n"<<SR-sumr;


    }
}