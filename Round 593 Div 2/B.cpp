//Mark XVI
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
ll power(ll A, ll B, ll C) 
{ 
    if (A == 0) 
        return 0; 
    if (B == 0) 
        return 1; 
  
    ll y; 
    if (B % 2 == 0) { 
        y = power(A, B / 2, C); 
        y = (y * y) % C; 
    } 
  
    else { 
        y = A % C; 
        y = (y * power(A, B - 1, C) % C) % C; 
    } 
  
    return (ll)((y + C) % C); 
} 
void solve()
{
  ll n,m;
  cin>>n>>m;

  if(m==1)
  {
    cout<<n%M<<"\n";
    return;
  }

  ll ans=power(3,n,M);
  

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
  {
    deb('\n')
    solve();
  }
}