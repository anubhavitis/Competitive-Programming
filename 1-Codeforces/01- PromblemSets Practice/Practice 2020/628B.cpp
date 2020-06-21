//Mark XXII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,a,b) for(int i=a; i<b; ++i)

using namespace std;

void solve()
{
  string s;
  cin>>s;
  ll cnt=0;
  if((s[0]-'0')%4==0) cnt++;
  rep(i,1,s.size())
  {
    if((s[i]-'0')%4==0) cnt++;
    if(( (s[i-1]-'0')*10+(s[i]-'0') )%4==0) cnt+=i;
  }
  cout<<cnt;
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
  //cin>>t;
  while(t--)
    solve();
}