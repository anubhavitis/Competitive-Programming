//Mark XXVI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j,z;
using namespace std;
string s[]={ 
  "1110111", "0010010", "1011101", "1011011", "0111010",
  "1101011", "1101111", "1010010", "1111111", "1111011" };
int a[2005][10]={};
bool dp[2005][2005]={};

int cnt(string bin, int x)
{
  string cmp=s[x];
  int c=0;
  rep(j,0,7)
    if(bin[j]=='0' and cmp[j]=='1') c++;
    else if(bin[j]=='1' and cmp[j]=='0') return -1;
  return c;
}

void calc(int n,int k)
{
  dp[0][0]=1;
  rep(i,1,n+1)
  {
    rep(z,0,10) if(a[n-i][z]==0) dp[i][0]=true;
    if(!dp[i-1][0]) dp[i][0]=false;
    rep(j,1,k+1)
      rep(z,0,10)
      {
        if((j-a[n-i][z])<0 or a[n-i][z]<0) continue;
        dp[i][j]=dp[i-1][j-a[n-i][z]];
        if(dp[i][j]) break;
      }
  }
}

void solve()
{
  int z,n,k;
  string temp;
  cin>>n>>k;
  rep(i,0,n)
  {
    cin>>temp;
    rep(z,0,10) a[i][z]=cnt(temp,z);
  }
  calc(n,k);
  if(!dp[n][k]) { cout<<"-1\n"; return; }

  rep(i,0,n)
    rrep(j,9,0)
      if(a[i][j]!=-1 and dp[n-1-i][k-a[i][j]])
      {
        cout<<j;
        k-=a[i][j];
        break;
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
  //cin>>t;
  while(t--)
    solve();
} 