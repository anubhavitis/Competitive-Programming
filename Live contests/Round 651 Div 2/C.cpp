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

ll i,j,n,k;

void solve(){
  cin>>n;
  if(n==1) { cout<<"FastestFinger\n"; return; }
  else if(n==2 or n%2){ cout<<"Ashishgup\n"; return; }

  ll bd=1,cd=0;
  for(i=2;i*i<=n;++i)
    if(n%i==0){
      if(i%2) cd++,bd=max(bd,i);
      if((n/i)%2) cd++,bd=max(bd,n/i);
    }
  
  if(n/bd==2 and cd==1) cout<<"FastestFinger\n";
  else if(bd==1) cout<<"FastestFinger\n";
  else cout<<"Ashishgup\n";
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