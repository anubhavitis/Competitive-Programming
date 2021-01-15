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
  int n,k;
  string s;
  cin>>n>>k>>s;

  int cnt[k][26]={};
  rep(i,0,n)  cnt[i%k][s[i]-'a']++;
  int ans=0;
  char ma[k];
  rep(i,0,k/2)
  {
    int mx=-1,key=-1;
    rep(j,0,26) if(mx<(cnt[i][j]+cnt[k-i-1][j])) 
    {
      mx=(cnt[i][j]+cnt[k-i-1][j]);
      key=j;
    }
    ma[i]=ma[k-i-1]=(key+'a');
  }
  if(k%2)
  {
    int mx=-1,key=-1;
    rep(j,0,26) if( mx<cnt[k/2][j] ) { mx=cnt[k/2][j]; key=j; }
    ma[k/2]=(key+'a'); 
  }
  
  rep(i,0,n)
    if(s[i]!=ma[i%k] ) ans++;
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
  //cin>>t;
  while(t--)
    solve();
}