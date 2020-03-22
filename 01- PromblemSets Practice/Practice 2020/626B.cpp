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

#define deb(x) cerr<<#x<<" "<<x<<"\n";

#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(int i=b; i<c; ++i)
using namespace std;

void solve()
{
  int n;
  string s;
  cin>>n>>s;
  int a[3]={};
  for(auto i:s)
    if(i=='R') a[0]++;
    else if(i=='G') a[1]++;
    else a[2]++;
  if( min(a[0],min(a[1],a[2])) >=1 ) cout<<"BGR";
  else
  {
    if(a[0]==0 and a[1]==0) cout<<"B";
    else if(a[2]==0 and a[1]==0) cout<<"R";
    else if(a[0]==0 and a[2]==0) cout<<"G";
    else 
    {
      if(a[0]==0)
      {
        if(a[1]==1 and a[2]==1) cout<<"R";
        else if(a[1]==1 and a[2]>1) cout<<"GR";
        else if(a[1]>1 and a[2]==1) cout<<"BR";
        else cout<<"BGR";
      }
      else if(a[1]==0)
      {
        if(a[0]==1 and a[2]==1) cout<<"G";
        else if(a[0]==1 and a[2]>1) cout<<"GR";
        else if(a[0]>1 and a[2]==1) cout<<"BG";
        else cout<<"BGR";
      }
      else if(a[2]==0)
      {
        if(a[1]==1 and a[0]==1) cout<<"B";
        else if(a[1]==1 and a[0]>1) cout<<"BG";
        else if(a[1]>1 and a[0]==1) cout<<"BR";
        else cout<<"BGR";
      }
    }
  }
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