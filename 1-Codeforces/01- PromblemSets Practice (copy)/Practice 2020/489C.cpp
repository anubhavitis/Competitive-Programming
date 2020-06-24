//Mark XXVI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

bool can(int m, int s)
{
  if(s>=0 and 9*m>=s) return true;
  return false;
}

void solve()
{
  int m,s,sum;
  cin>>m>>sum;
  s=sum;
  if(m==1 and s==0) { cout<<"0 0"; return; }
  if( (s==0 and m>1) or 9*m<s) { cout<<"-1 -1"; return; }

  string bi,sh;
  rep(i,0,m)
  {
    rep(j,0,10)
      if(can(m-i-1,s-j)) { bi+=char('0'+j); s-=j; break;}
  }
  sort(all(bi),big(char));
  s=sum;
  rep(i,0,m)
  {
    rep(j,0,10)
    {
      if( (i==0 and j>0) and can(m-i-1,s-j)) { sh+=char('0'+j); s-=j; break;}
      else if(i>0 and can(m-i-1,s-j)) { sh+=char('0'+j); s-=j; break;}
    }
  }
  cout<<sh<<" "<<bi;

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