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

int i,j,n,k;
string bin(ll x){
  string ans;
  while(x){
    ans= char('0'+x%2) +ans;
    x/=2;
  }
  return ans;
}
void solve(){
  ll a,b;
  cin>>a>>b;
  string sa,sb;
  sa=bin(a);
  sb=bin(b);
  if(sa.size()!=sb.size()){
    int ma=max(sa.size(),sb.size());
    cout<<((ll)1<<ma)-1;
  }
  else{
    rep(i,0,sa.size()) if(sa[i]!=sb[i]) break;
    if(i==sa.size()) cout<<"0";
    else cout<<((ll)1<<(sa.size()-i))-1;
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
  // cin>>t;
  while(t--)
    solve();
} 