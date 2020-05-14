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

// #define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve()
{
  int n,k;
  string s;
  cin>>n>>k>>s;
  k++;
  vector<int> v;
  rep(i,0,n) if(s[i]=='0') v.pb(i+1);
  int key=INF,l=0;
  rep(i,0,v.size()-k+1)
  {
    int x=i,y=x+k-1;
    int mid=(v[x]+v[y])/2;
    int ind=ub(v.begin()+x,v.begin()+y,mid)-v.begin();
    key=min(key,max(abs(v[ind]-v[x]),abs(v[ind]-v[y])));
    key=min(key,max(abs(v[ind-1]-v[x]),abs(v[ind-1]-v[y])));
  }
  cout<<key;
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