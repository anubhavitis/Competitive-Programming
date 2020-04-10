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

void solve()
{
  int n;
  cin>>n;
  int a[n],b[n];
  int i;
  rep(i,0,n) cin>>a[i];
  rep(i,0,n) cin>>b[i];

  int x=0,c=0;
  rep(i,0,n)
  {
    if(b[i]>a[i] and c==0) { cout<<"NO\n"; return;}
    if(b[i]<a[i] and x==0) { cout<<"NO\n"; return;}
    if(a[i]==-1)x=1;
    else if(a[i]==1) c=1;
  }
  cout<<"YES\n";
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