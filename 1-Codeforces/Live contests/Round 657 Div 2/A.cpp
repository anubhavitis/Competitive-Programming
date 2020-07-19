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

int i,j,n,m;

void solve(){
  string s,t="abacaba";
  cin>>n>>s;
  int k=-1,fl=0;
  rep(i,0,n-6){
    int f=1;
    rep(j,0,7){
      if(s[i+j]!=t[j]) f=0;
    }
    if(f) fl++;
  }
  if(fl>1) { cout<<"NO\n"; return; }
  else if(fl==1){
    cout<<"YES\n";
    rep(i,0,n){
      if(s[i]=='?') cout<<"z";
      else cout<<s[i];
    }
    cout<<endl;
    return;
  }
  vector<int> v;
  rep(i,0,n-6){
    int f=1;
    rep(j,0,7){
      if(s[i+j]=='?') continue;
      if(s[i+j]!=t[j]) f=0;
    }
    if(f){
      v.pb(i);
    }
  }
  if(v.size()==0) { cout<<"NO\n"; return; }
  
  for(auto it:v){
    string dup=s;
    rep(j,0,7) dup[it+j]=t[j];
    rep(i,0,n) if(dup[i]=='?') dup[i]='z';
    int cnt=0;
    rep(i,0,n-6){
      int f=1;
      rep(j,0,7){
        if(dup[i+j]!=t[j]) f=0;
      }
      if(f) cnt++;
    }

    if(cnt==1){
      cout<<"YES\n"<<dup<<endl;
      return;
    }
  }
  cout<<"NO\n";

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