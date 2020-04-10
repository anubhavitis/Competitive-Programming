//Mark XXIII
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
#define rep(i,b,c) for(i=b; i<c; ++i)

using namespace std;
int n,k;
map<int,int> m;

bool cank(int val)
{
  int cnt=0;
  for(auto i:m)
    cnt+=i.second/val;
  if(cnt>=k) return true;
  return false;
}

void solve()
{
  cin>>n>>k;
  int i,temp;
  rep(i,0,n) cin>>temp,m[temp]++;
  int lo=1,h=n/k,l=1;
  while(lo<=h)
  {
    if( cank((lo+h)/2) )
      l=(lo+h)/2,lo=(lo+h)/2+1;
    else
      h=( (lo+h)/2 )-1 ;
  }
  int cnt=k;
  for(auto it:m)
  {
    int x=it.second/l;
    x=min(cnt,x);
    cnt-=x;
    while(x--) cout<<it.first<<" ";
    if(cnt==0) break;
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