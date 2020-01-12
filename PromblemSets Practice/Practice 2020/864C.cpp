//Mark XIX
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

int temp;

using namespace std;

void solve()
{
  int a,b,f,k;
  cin>>a>>b>>f>>k;
  int cnt=0,fu=b-f;
  for(int i=0;i<k-1;++i)
  {
    if(fu<0) { cout<<"-1"; return;}
    if(i%2)
    {
      if(fu<2*f) cnt++,fu=b;
      fu-=2*f;
    }
    else
    {
      if(fu<2*(a-f)) cnt++,fu=b;
      fu-=2*(a-f);
    }
  }
  if(fu<0) { cout<<"-1"; return;}
  if(k%2 and fu<(a-f)) cnt++,fu=b-(a-f);
  if(k%2==0 and fu<f) cnt++,fu=b-f;
  if(fu<0) { cout<<"-1"; return;}

  cout<<cnt; 
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