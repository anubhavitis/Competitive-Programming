//Mark XXVI
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
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve()
{
  int n;
  string s;
  cin>>s;
  n=s.size();
  
  int arr[]={-1,-1,-1};
  int ans=INF;

  rep(i,0,n)
  {
    if(s[i]=='1') arr[0]=i;
    if(s[i]=='2') arr[1]=i;
    if(s[i]=='3') arr[2]=i;

    if(arr[0]>=0 and arr[1]>=0 and arr[2]>=0)
    {
    int t1=min(arr[0],min(arr[1],arr[2]));
    int t2=max(arr[0],max(arr[1],arr[2]));
    ans=min(ans, t2- t1 +1);
    }
  }
  if(ans==INF) cout<<"0\n";
  else cout<<ans<<endl;
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