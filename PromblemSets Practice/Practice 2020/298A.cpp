//Mark XVIII
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

using namespace std;

void solve()
{
  int n;
  string s;
  cin>>n>>s;
  int t=-1,cr=0,cl=0,pi=-1,pj=-1;
  for (int i = 0; i < n; ++i)
  {
    if(s[i]=='L') cl++;
    if(s[i]=='R') cr++;
    if(pi==-1 and s[i]!='.') pi=i;
    if(pi!=-1 and s[i]!='.') pj=i;
    if(t==-1 and s[i]=='L') t=i;
  }
  if(cr==0 or cl==0)
  {
    if(cl)
      cout<<pj+1<<" "<<pi;
    else
      cout<<pi+1<<" "<<pj+2;
    return;
  }
  cout<<pj+1<< " "<<t+1;
  
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