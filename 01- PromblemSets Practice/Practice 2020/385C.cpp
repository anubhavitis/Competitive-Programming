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

#define N 10000000
int i,j,n,m,l,r,a[N+20]={},p[N+20]={},pref[N+20]={};

void solve()
{
  cin>>n;
  int temp;
  rep(j,0,n) cin>>temp,a[temp]++;
  
  for(int i=2;i<=N;++i)
  {
    if(!p[i])
      for(j=i;j<=N;j+=i){
        pref[i]+=a[j];
        p[j]=1;
      }
    pref[i]+=pref[i-1];
  }

  cin>>m;
  while(m--)
  {
    cin>>l>>r;
    if(l>10000000) l=10000000;
    if(r>10000000) r=10000000;
    cout<<pref[r]-pref[l-1]<<endl;
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