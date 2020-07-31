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

int i,n,j,m;

char rev(char x){
  if(x=='1') return '0';
  else return '1';
}

void solve(){
  string a,b;
  cin>>n>>a>>b;

  int r=n-1;
  while(a[r]==b[r] and r>=0) r--;
  if(r<0) { cout<<"0\n"; return; }
  int k=0;
  vector<int> v;
  int f=0;
  while(r>=0){
    // cerr<<r<<" "<<k<<endl;
    if(a[0]==b[r]){
      k++;
      v.pb(1);
      a[0]=rev(a[0]);
    }
    k++;
    v.pb(r+1);

    // a=revs(a,r);
    int x=0;
    if(!f) { f=1; while(rev(a[x])==b[r-x] and x<=r) x++; }
    else { while(a[x]==b[r-x] and x<=r) x++; }
    r-=x;
    a=a.substr(x,r-x+1);
    reverse(all(a));
    while(a[r]==b[r] and r>=0) r--;
  }
  cout<<k<<" ";
  for(auto it:v) cout<<it<<" ";
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