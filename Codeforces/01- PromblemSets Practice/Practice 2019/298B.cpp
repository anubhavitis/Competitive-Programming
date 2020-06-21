//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve()
{
  int t,sx,ex,sy,ey;
  cin>>t>>sx>>sy>>ex>>ey;
  string s;
  cin>>s;
  deb(sx)deb(ex)deb(sy)deb(ey)
  for(int x=0;x<t;++x)
  {
    char i=s[x];
    if(i=='N' and sy<ey) sy++;
    if(i=='S' and ey<sy) sy--;
    if(i=='E' and sx<ex) sx++;
    if(i=='W' and ex<sx) sx--;
    if(sx==ex and sy==ey)
    {
      cout<<x+1;
      return;
    }
  }
  cout<<"-1";
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
  }
}