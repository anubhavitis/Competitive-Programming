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

int i,j,n;

void solve(){
  ll l,r,m;
  cin>>l>>r>>m;
  ll lim=r-l;
  rep(i,l,r+1){
    double x=(m-lim)/double(i),y=(m+lim)/double(i);
    // deb(x)deb(y)
    if((ceil(x)!=ceil(y) or floor(x)!=floor(y)) or (x==y)){
      ll ans=floor(y);
      cout<<i<<" ";
      ll dif=m-ans*i;
      if(dif>=0) cout<<l+dif<<" "<<l<<endl;
      else cout<<l<<" "<<l-dif<<endl;
      return;
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