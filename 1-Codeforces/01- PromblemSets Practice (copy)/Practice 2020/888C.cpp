//Mark XXII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(int i=b; i<c; ++i)

using namespace std;

void solve()
{
  string s;
  cin>>s;
  int n=s.size();
  int a[26]={},ma[26]={};
  rep(i,1,n+1)
  {
    ma[s[i-1]-'a']=max(ma[s[i-1]-'a'],i-a[s[i-1]-'a']);
    if(a[s[i-1]-'a']==0) a[s[i-1]-'a']=i;
    else a[s[i-1]-'a']=i;
  }
  rep(i,0,26) ma[i]=max(ma[i],n+1-a[i]);
  int ans=INT_MAX;
  for(auto i:ma) if(i) ans=min(i,ans);
  cout<<ans;
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
  //cin>>t;
  while(t--)
    solve();
}