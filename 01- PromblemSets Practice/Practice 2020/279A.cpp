//Mark XIX
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

int t1,t2;

using namespace std;

void solve()
{
  int x,y;
  cin>>x>>y;

  int t=max(abs(x),abs(y));deb(t)
  int ans=4*t-3;
  if(x==y and y==0) cout<<0;

  else if(x==t and y==-(t-1)) cout<<ans-1;
  else if(x==t and (y>=-(t-1) and y<=t)) cout<<ans;
  else if(y==t and (x>=-t and x<t)) cout<<ans+1;
  else if(x==-t and (y>=-t and y<t)) cout<<ans+2;
  else if(y==-t and (x>-(t) and x<=t)) cout<<ans+3;

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
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}