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

ll i,n,k;
string s;
int b[1005]={};

bool check(int cur,int w1,int w2){

  if(cur>k) return true;
  int j;
  rep(j,1,11)
    if(b[cur-1]!=j and s[j-1]=='1' and (w1+j)>w2 ){
      b[cur]=j;
      if(check(cur+1,w2,w1+j)) return true;
    }
  return false;

} 

void solve(){
  cin>>s>>k;
  if(!check(1,0,0)) cout<<"NO\n";
  else{
    cout<<"YES\n";
    rep(i,1,k+1) cout<<b[i]<<" ";
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