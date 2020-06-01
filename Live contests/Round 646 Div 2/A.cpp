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

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m;
ll fact[100001];


void solve()
{
  ll x;
  cin>>n>>x;
  int ne=0,no=0;
  rep(i,0,n) 
  {
    cin>>m;
    if(m%2) no++;
    else ne++;
  }

  if(!no) cout<<"NO\n";
  else if(ne>=x-1) cout<<"YES\n";
  else if(!ne and x%2 and no>=x) cout<<"YES\n";
  else if(ne)
  {
    if((x-ne)%2 and no>=(x-ne)) cout<<"YES\n";
    else if((x-ne)%2==0) 
    {
      if(no>x-ne) cout<<"YES\n";
      else cout<<"NO\n";
    }
  }
  else cout<<"NO\n";


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