//Mark XXVII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define deball(x) for(auto iit:x) cerr<<iit<<" ";cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m,k;

void solve()
{
  ll x,y;
  cin>>n>>m>>x>>y;
  ll ans=0;
  string s;
  rep(i,0,n)
  {
    cin>>s;
    if((2*x)<=y)
      rep(j,0,m) {if(s[j]=='.') ans+=x;}
    else
    {
      rep(j,0,m-1)
      {
        if(s[j]=='.' and s[j+1]=='.')
        {
          s[j]=s[j+1]='*';
          ans+=y;
        }
        else if(s[j]=='.') ans+=x;
      }
      if(s[m-1]=='.') ans+=x;
    }
  }
  cout<<ans<<endl;
    
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