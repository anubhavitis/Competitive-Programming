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

int i,j;

void solve()
{
  ll n,m,k;
  cin>>n>>m>>k;

  vector<ll> a(n+1),pref(n);
  ll sum=0;
  rep(i,0,n)
  {
    cin>>a[i];
    sum+=a[i];
    pref[i]=abs(a[i]-sum);
  }
  ll op[m][3];
  rep(i,0,m) cin>>op[i][0]>>op[i][1]>>op[i][2];

  int calc[m+1]={};
  int x,y;
  rep(i,0,k)
  {
    cin>>x>>y;
    calc[x]++;
    if(y<m) calc[y+1]--;
  } 
  rep(i,1,m+1) calc[i]+=calc[i-1];
  rep(i,0,m)
  {
    op[i][2]*=calc[i+1];
    a[op[i][0]-1]+=op[i][2];
    a[op[i][1]]-=op[i][2];
  }

  rep(i,1,n) a[i]+=a[i-1];
  rep(i,0,n) a[i]-=pref[i];
  rep(i,0,n) cout<<a[i]<<" ";
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