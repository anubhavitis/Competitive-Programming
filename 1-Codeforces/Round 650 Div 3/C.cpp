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
string s;
bool check(int x)
{ 
  int l=s.size();
  int arr[l]={};
  if(s[l-1]=='0') arr[l-1]=k+1;
  rrep(i,l-2,0){
    if(s[i]=='1') arr[i]=0;
    else if(arr[i+1]==k+1) arr[i]=k+1;
    else arr[i]=arr[i+1]+1;
  }
  int pre=k+1;
  rep(i,0,l)
  {
    if(s[i]=='1') { pre=1; continue; }

    if(arr[i]>k and pre>k){
      x--;
      pre=0;
    }
    pre++;
  }
  if(x>0) return false;
  else return true;
}
void solve()
{
  cin>>n>>k>>s;

  int l=1,r=0;
  for(auto it:s) if(it=='0') r++;
  int ans=0,mid=0;

  while(l<=r){
    mid=(l+r)/2;
    if(check(mid)){
      ans=mid;
      l=mid+1;
    }
    else r=mid-1;
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
  cin>>t;
  while(t--)
    solve();
} 