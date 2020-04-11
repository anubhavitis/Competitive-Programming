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
  int x[n],y[n];
  int i;
  rep(i,0,n) cin>>x[i]>>y[i];
  if(y[0]>x[0]) {cout<<"NO\n"; return; }
  rep(i,1,n)
  {
    if(x[i]<x[i-1] or y[i]<y[i-1] or y[i]>x[i])
    {
      cout<<"NO\n";
      return;
    }
    if(y[i]>y[i-1] and x[i]==x[i-1])
    {
    cout<<"NO\n";
    return;
    }
    
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