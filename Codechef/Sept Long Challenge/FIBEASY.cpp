//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

map<__int128, __int128> F;

__int128 f(__int128 n) {
  if (F.count(n)) return F[n];
  __int128 k=n/2;
  if (n%2==0) { // n=2*k
    return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % 10;
  } else { // n=2*k+1
    return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % 10;
  }
}

void solve()
{
  unsigned ll n;
  __int128 p;
  cin>>n;
  if(n==1) cout<<0<<"\n";
  else if(n==2) cout<<1<<"\n";
  else 
  {
    for(p=0;pow(2,p+1)<=n;++p);
    cout<<ulong( f(pow(2,p)-2) )<<"\n";
  }
}

int main()
{
  //Skipped in presense of online judge.
    F[0]=F[1]=1;
  #ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt","r",stdin);
  freopen("/home/zeddie/Documents/output.txt","w",stdout);
  freopen("/home/zeddie/Documents/error.txt","w",stderr);
  #endif

  IOS()
  ll t=1;
  cin>>t;
  cerr<<F.count(1);
  while(t--)
  {
    solve();
  }
}