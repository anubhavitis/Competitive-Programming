//Mark XVII
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
  string s;
  cin>>s;
  int x=0,y=s.size()-1;
  
  while(s[x]!='[' and x<=y) x++;
  if(x==y+1) { cout<<"-1"; return; }
  while(s[y]!=']' and y>x) y--;
  if(y<=x) { cout<<"-1"; return; }
  x++;y--;
  deb(x)deb(y)

  while(s[x]!=':' and x<=y) x++;
  if(x==y+1) { cout<<"-1"; return; }
  while(s[y]!=':' and y>x) y--;
  if(y<=x) { cout<<"-1"; return; }
  x++;y--;
  deb(x)deb(y)

  int ans=0;
  while(x<=y) if(s[x++]=='|') ans++;

  cout<<ans+4;


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