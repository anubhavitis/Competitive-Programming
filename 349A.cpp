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

void solve()
{
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  int x25=0,x50=0,x100=0;
  for (int i = 0; i < n; ++i)
  {
    if(a[i]==100)
    {
      x100++;
      if(x25 and x50)
      {
        x25--;
        x50--;
        continue;
      }
      else if(x25>2) { x25-=3; continue; }
    }
    else if(a[i]==50)
    {
      x50++;
      if(x25) { x25-=1; continue; }
    } 
    else { x25++; continue; }
    cout<<"NO";
    return;
  }
  cout<<"YES";
  return;
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