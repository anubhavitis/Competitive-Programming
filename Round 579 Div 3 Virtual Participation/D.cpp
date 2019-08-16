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
   string s,t;
   cin>>s;
   cin>>t;
   int ns,nt;
   ns=s.length();
   nt=t.length();
   int si=0,S=0,i,j=0;
   for (i = 0; i < ns && j<nt; i++)
   {
   		if(s[i]==t[j])
   		{
   			S=max(si,S);
   			si=0;
   			j++;
   		}
   		else 
   		{
   			si++;
   		}
   }
   if(i<ns) S=max(ns-i,S);
   cout<<S e()
}