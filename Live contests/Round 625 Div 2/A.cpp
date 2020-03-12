//Mark XX
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

using namespace std;

void solve()
{
  int n;
  cin>>n;
  int a[n],b[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  for (int i = 0; i < n; ++i)
  {
    cin>>b[i];
  }

  int ca=0,cb=0;
  for (int i = 0; i < n; ++i)
  {
    if(a[i] and !b[i]) ca++;
    if(b[i] and !a[i]) cb++;
  
}  deb(ca)deb(cb)
  if(ca==0) cout<<"-1";
  else if( ca>cb) cout<<"1";
  else if (ca==cb) cout<<"2";
  else cout<<ceil((cb+1)/float(ca));
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