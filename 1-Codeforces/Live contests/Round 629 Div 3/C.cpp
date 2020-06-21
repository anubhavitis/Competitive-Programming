//Mark XXII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(int i=b; i<c; ++i)

using namespace std;

void solve()
{
  int n;
  string s;
  cin>>n>>s;
  string a="1",b="1";
  int f=1;
  for(int i=1;i<n;++i)
  {
    if(s[i]=='0') a+='0',b+='0';
    if( s[i]=='1' and f) a+='1',b+='0',f=0;
    else if( s[i]=='1') a+='0',b+='1';
    if(s[i]=='2' and f) a+='1',b+='1';
    else if(s[i]=='2') a+='0',b+='2';

  }
  cout<<a<<"\n"<<b<<endl;
}

int main()
{
  //Skipped in presense of online judge.
  #ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt","r",stdin);
  freopen("/home/zeddie/Documents/output.txt","w",stdout);
  freopen("/home/zeddie/Documents/error.txt","w",stderr);
  #endif

  IOS()
  ll t=1;
  cin>>t;
  while(t--)
    solve();
}