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

int i,j,n,k;

void solve(){
  cin>>n>>k;
  vector<int> a(n),w(k);
  rep(i,0,n) cin>>a[i];
  rep(i,0,k) cin>>w[i];
  sort(all(a),big(int));
  sort(all(w));
  ll ans=0;
  vector<int> z;
  int beg=0;
  rep(i,0,k){
    if(w[i]==1) ans+=2*a[beg++];
    else z.pb(w[i]);
  }
  sort(all(z),big(int));
  int end=n-1;
  rep(i,0,z.size()){
    ans+=a[beg]+a[end];
    beg++;
    end-=(z[i]-1);
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