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

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m;
const int MAXN=10000001;
int spf[MAXN]; 
void sieve() 
{ 
  spf[1] = 1; 
  for (int i=2; i<MAXN; i++) spf[i] = i; 

  for (int i=4; i<MAXN; i+=2) 
      spf[i] = 2; 

  for (int i=3; i*i<MAXN; i++) 
  if (spf[i] == i) 
      for (int j=i*i; j<MAXN; j+=i)  
          if (spf[j]==j) 
            spf[j] = i; 
} 
set<int> getFactorization(int x) 
{ 
    set<int> ret; 
    while (x != 1) 
    { 
        ret.insert(spf[x]); 
        x = x / spf[x]; 
    } 
    return ret; 
} 
void solve()
{
  sieve();
  cin>>n;
  vector<int> f1,f2;
  int temp;
  rep(i,0,n)
  {
    cin>>temp;
    set<int> prime=getFactorization(temp);
    ll prod=1;
    for(auto it:prime) prod*=it;
    if(prime.size()==1) f1.pb(-1),f2.pb(-1);
    else f1.pb(*(prime.begin())),f2.pb(prod/(*(prime.begin())));
  }
  for(auto it:f1) cout<<it<<" "; cout<<endl;
  for(auto it:f2) cout<<it<<" "; 
  
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