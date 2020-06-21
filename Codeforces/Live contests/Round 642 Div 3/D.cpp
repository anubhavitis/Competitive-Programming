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
ll i,j;
using namespace std;

struct cmp{
  bool operator() ( pair<int,int> x, pair<int,int> y)
  {
    if((x.second-x.first)==(y.second-y.first)) return x.first<y.first;
    return (x.second-x.first)>(y.second-y.first);
  }
};
void solve()
{
  int n;
  cin>>n;
  set<pair<int,int>,cmp> s;
  i=1;
  s.insert(mp(1,n));
  int arr[n+1]={};

  while(s.size())
  {
    pair<int,int> x=*(s.begin());
    s.erase(s.begin());
    // deb(s.size())
    int mid=(x.first+x.second)/2;
    arr[mid]=i++;
    if(x.first  <= mid-1) s.insert(mp(x.first,mid-1));
    if(x.second >= mid+1) s.insert(mp(mid+1,x.second));
  }

  rep(i,1,n+1) cout<<arr[i]<<" ";
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