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


void solve()
{
  int n;
  cin>>n;
  string a;
  cin>>a;
  int cnt=0;
  for (int i = 1; i < n; i+=2)
  {
    if(a[i]==a[i-1])
    {
      cnt++;
      if(a[i-1]=='a') a[i-1]='b';
      else a[i-1]='a';
    }
  }
  cout<<cnt<<"\n"<<a;
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
  }
}