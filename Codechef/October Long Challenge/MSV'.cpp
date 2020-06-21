//Mark XIV
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

void div(int a, int b[])
{
  for(int i=1;i*i<=a;++i)
    if(a%i==0)
    {
      b[i]++;
      if(a/i!=i)  b[a/i]++;
    }
}

void solve()
{
  int n;
  int b[1000001]={};
  //deb("Hi")
  cin>>n;
  int a[n],m=0,ans=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    m=max(m,b[ a[i] ]);
    div(a[i],b);
  }
  deb(m)
  cout<<m<<"\n";
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
  {
    solve();
  }
}