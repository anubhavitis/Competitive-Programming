//Mark XXX
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
#define deball(x) for(auto iit:x) cerr<<setw(4)<<iit;cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

//Code begins from here!!
ll i, j, n, k, z;

void solve(void) {
  cin >> n;
  vector<ll> arr(n);
  for (auto& it : arr) cin >> it;

  if(n==1){
    cout<<"1 1\n"<<-(arr[0])<<"\n1 1\n0\n1 1\n0\n";
    return;
  }
  
  cout<<"1 "<<(n-1)<<endl;
  rep(i, 0, n-1){
    cout<< (n-1)*(arr[i]%n)<<" ";
    arr[i]+=(n-1)*(arr[i]%n);
  }
  cout<<endl;

  cout<<n<<" "<<n<<endl;
  cout<<-(arr[n-1]%n)<<endl;
  arr[n-1]-=arr[n-1]%n;

  cout<<"1 "<<n<<endl;
  for(auto it: arr) cout<<-it<<" ";
  
}

int main()
{

#ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt", "r", stdin);
  freopen("/home/zeddie/Documents/output.txt", "w", stdout);
  freopen("/home/zeddie/Documents/error.txt", "w", stderr);
#endif
  IOS()
  ll t = 1;
  // cin >> t;

  while (t--)
    solve();
}