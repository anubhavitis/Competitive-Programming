//Mark XXI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(a,b,c) for(int i=a; i<b; i+=c)
using namespace std;

void solve()
{
  int n,k;
  cin>>n>>k;
  ll a[n],temp=0;
  vector <int> v;
  rep(0,n,1)  cin>>a[i];
  int i=1;
  while(temp <= 10000000000000000)
  {
    temp=pow(k,i);
    
  }
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