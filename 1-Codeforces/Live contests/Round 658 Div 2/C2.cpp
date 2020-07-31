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
#define deball(x) cerr<<#x<<": "; for(auto iit:x) cerr<<iit<<" ";cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,n,j,m;

void solve(){
  string a,b;
  cin>>n>>a>>b;

  int k=0;
  vector<int> v1,v2;
  rep(i,0,n-1)
    if(a[i]!=a[i+1]){
      k++;
      v1.pb(i+1);
    }
  if(a[n-1]=='1'){
    k++;
    v1.pb(n);
  }
  if(b[n-1]=='1'){
    k++;
    v1.pb(n);
  }

  rep(i,0,n-1)
    if(b[i]!=b[i+1]){
      k++;
      v2.pb(i+1);
    }
  // deball(v1)
  // deball(v2)
  rrep(i,v2.size()-1,0) v1.pb(v2[i]);
  cout<<k<<" ";
  for(auto it:v1) cout<<it<<" ";
  cout<<endl;
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