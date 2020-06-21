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
int i,j;
using namespace std;

void precisionCompute(double x, double y, int n) 
{ 
    // Base cases 
    if (y == 0) { 
        cout << "Infinite" << endl; 
        return; 
    } 
    if (x == 0) { 
        cout << 0 << endl; 
        return; 
    } 
    if (n <= 0) { 
        // Since n <= 0, don't compute after 
        // the decimal 
        cout << x / y << endl; 
        return; 
    } 
  
    // Handling negative numbers 
    if (((x > 0) && (y < 0)) || ((x < 0) && (y > 0))) { 
        cout << "-"; 
        x = x > 0 ? x : -x; 
        y = y > 0 ? y : -y; 
    } 
  
    // Integral division 
    int d = x / y; 
  
    // Now one by print digits after dot 
    // using school division method. 
    for (int i = 0; i <= n; i++) { 
        cout << d; 
        x = x - (y * d); 
        if (x == 0) 
            break; 
        x = x * 10; 
        d = x / y; 
        if (i == 0) 
            cout << "."; 
    } 
} 

void solve()
{
  double n,o=1;
  cin>>n;
  n*=2;
  precisionCompute(1.0,0.732*sin(PI/n),9);
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