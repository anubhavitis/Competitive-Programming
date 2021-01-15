//Mark XXII
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
#define rep(i,b,c) for(int i=b; i<c; ++i)

using namespace std;

ll pe(ll x, ll y)  
{  
  ll res = 1;
  x = x % M;
  while (y > 0)  
  {  
    if (y & 1)  
        res = (res*x) % M;
    y = y>>1;
    x = (x*x) % M;  
  }  
  return res;  
}

void solve()
{
  int n;
  cin>>n;
  rep(i,1,n)
  {
    ll A= ((n-i-1)*((81*pe(10,n-i-1))%M))%M;
    ll B= (18*pe(10,n-i))%M;
    cout<<(A+B)%M<<" ";
  }
  cout<<"10"<<endl;

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