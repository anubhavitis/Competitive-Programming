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
  int n;
  string s;
  int x;
  char y;

  int p1=-2e9,p2=2e9;

  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    cin>>s>>x>>y;
    if(s=="<" and y=='Y') p2=min(x-1,p2);
    else if(s=="<" and y=='N') p1=max(x,p1);
    else if(s==">" and y=='Y') p1=max(x+1,p1);
    else if(s==">" and y=='N') p2=min(x,p2);
    else if(s=="<=" and y=='Y') p2=min(x,p2);
    else if(s=="<=" and y=='N') p1=max(x+1,p1);
    else if(s==">=" and y=='Y') p1=max(x,p1);
    else if(s==">=" and y=='N') p2=min(x-1,p2);
    deb(p1)deb(p2)
  }
  if(p1<=p2) cout<<p1;
  else cout<<"Impossible";
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