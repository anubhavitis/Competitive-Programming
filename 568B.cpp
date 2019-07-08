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
   	
   	int n;
   	cin>>n;
   	while(n--)
   	{
   		string s,t;
   		cin>>s>>t;
   		int p=s.length(),q=t.length();
   		int j=0,i=0;
   		for(j=0;j<q;)
   		{
   			if(s[0]!=t[0]) break;
   			if(s[i]==t[j]) { i++; j++; }
   			else if(t[j-1]!=t[j]) break;
   			else j++;
   			if(i==p && j!=q) while(j!=q)
   			{
   				if(t[j-1]!=t[j]) {i++; break;}
   				else j++;
   			}
   		}
   		if(i!=p) cout<<"NO\n";
   		else cout<<"YES\n";
   	} 
}
