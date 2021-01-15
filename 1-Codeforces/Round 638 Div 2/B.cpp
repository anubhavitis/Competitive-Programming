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
int i,j;
using namespace std;

void solve()
{
  int t,n,k;
  cin>>n>>k;
  int a[n+1]={};
  vector<int> ar(n);
  rep(i,0,n) cin>>ar[i],a[ar[i]]++;
  vector<int> v;
  rep(i,1,n+1) if(a[i]) v.pb(i);
  if(v.size()>k) 
  {
    cout<<"-1\n";
    return;
  }
  for(auto it:v) ar.insert(ar.begin(),it);
  i=1;
  j=k;
  while(j!=ar.size())
  {
    if(ar[i-1]!=ar[j]) ar.insert(ar.begin()+j,ar[i-1]);
    i++;
    j++;
  }
  cout<<ar.size()<<endl;
  for(auto it:ar) cout<<it<<" ";
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