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

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

int i,j,n,k;
ll maxsu(vector<int> a, int size) 
{ 
  ll max_yet = INT_MIN, max_now = 0; 

  for (int i = 0; i < size; i++) 
  { 
    max_now = max_now + a[i]; 
    if (max_yet < max_now) 
        max_yet = max_now; 

    if (max_now < 0) 
        max_now = 0; 
  } 
  return max_yet; 
} 
void solve(){
  cin>>n;
  ll sum=0;
  vector<int> v(n),l,r;
  rep(i,0,n) {
    cin>>v[i];
    if(i%2==0) sum+=v[i];
  }
  for(i=1;i<n;i+=2) l.pb(v[i]-v[i-1]);
  for(i=1;i<n;i+=2) if((i+1)!=n) r.pb(v[i]-v[i+1]);

  ll maxl=maxsu(l,l.size());
  ll maxr=maxsu(r,r.size());

  cout<<max(sum+max(maxr,maxl),sum)<<endl;
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