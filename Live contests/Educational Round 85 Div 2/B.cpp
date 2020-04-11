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
  ll n,x,i;
  cin>>n>>x;
  ll a[n];
  rep(i,0,n) cin>>a[i];
  sort(a,a+n,big(int));
  ll cnt=0;
  rep(i,0,n) 
    if(a[i]>x) 
    { 
      cnt+=a[i]-x;
      a[i]=x; 
    }
    else
    {
      if(cnt>=x-a[i])
      {
        cnt-= x-a[i];
        a[i]=x;
      }
      else break;
    }
  cout<<i<<endl;
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