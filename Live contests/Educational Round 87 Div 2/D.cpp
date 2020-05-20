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
using namespace std;
int i,j,n;

int tree[2000001];

void build( int arr[])  
{  
  rep(i,0,n) cerr<<arr[i]<<" "; cerr<<"\n";
  for (int i=0; i<n; i++) tree[n+i] = arr[i]; 
  for (int i = n - 1; i > 0; --i) tree[i] = tree[i<<1] + tree[i<<1 | 1];
} 
  
void updateTreeNode(int p,int val)  
{  
  tree[p+n]+=val; 
  p = p+n; 
  
  for (int i=p; i > 1; i >>= 1) tree[i>>1] = tree[i] + tree[i^1]; 
} 
  
int query(int k,int t)  
{  
  
} 

void solve()
{
  int q;
  cin>>n>>q;
  int t,a[n]={};
  rep(i,0,n) cin>>t,a[t]++;
  build(a);
  rep(i,0,2*n) cerr<<tree[i]<<" ";

  deb(query(3))
  // while(q--)
  // {
  //   cin>>t;
  //   if(t>0) updateTreeNode(t,1);
  //   t*=(-1);
  //   query

  // }

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