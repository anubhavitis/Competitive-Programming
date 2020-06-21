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
  string a,b,s,t;
  cin>>n>>a>>b;
  int c1=0,c2=0;
  rep(i,0,a.size()){
    if(a[i]=='1') c1++;
    if(b[i]=='1') c2++;

    if(a[i]!=b[i]) s+=a[i],t+=b[i];
  }
  if(c1!=c2) { cout<<"-1\n"; return; }
  int n=s.size();
  if(!n) { cout<<"0\n"; return; }
  int ans=0;
  while(s.size()){
    char t=s[0];
    string ns;
    rep(i,1,s.size()){
      if(s[i]==t) ns+=s[i];
      else t=s[i];
    }
    ans++;
    s=ns;
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
  // cin>>t;
  while(t--)
    solve();
} 