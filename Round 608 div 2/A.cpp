//Mark XVII
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

void solve()
{
  int a,b,c,d,e,f;
  cin>>a>>b>>c>>d>>e>>f;
  b=min(b,c);

  if(e>=f)
  {  
    cout<<e*min(a,d)+f*min(b,d-min(a,d));
    deb(e*min(a,d))
    deb(f*min(b,d-min(a,d)))
  }
  else
  {
    cout<<f*min(b,d)+e*min(a,d-min(b,d));
    deb(e*min(a,d-min(a,d)))
    deb(f*min(b,d))
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
  //cin>>t;
  while(t--)
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}