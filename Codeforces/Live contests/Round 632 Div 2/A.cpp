//Mark XXIII
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
#define rep(i,b,c) for(i=b; i<c; ++i)

using namespace std;

void solve()
{
  int n,m;
  cin>>n>>m;
  int i,j;
  if((n*m)%2)
    rep(i,0,n)
    {
      rep(j,0,m)
        if((i+j)%2) cout<<'W';
        else cout<<'B';
      cout<<endl;
    }
  else
  {
    rep(i,0,n)
    {
      rep(j,0,m)
        if((n*m)%2==0 and i==0) 
        {
          if(m%2 and j==m-2) cout<<'B';
          else if(m%2==0 and j==m-1) cout<<'B';
          else if((i+j)%2) cout<<'W';
          else cout<<'B';
        }
        else if((i+j)%2) cout<<'W';
        else cout<<'B';
      cout<<endl;
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
  cin>>t;
  while(t--)
    solve();
}