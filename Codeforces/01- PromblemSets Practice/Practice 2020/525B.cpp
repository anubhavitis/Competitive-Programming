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

int t1,t2;

using namespace std;

void solve()
{
  int m;
  string s;
  cin>>s>>m;
  int n=s.size();

  int a[n]={};
  for (int i = 0; i < m; ++i)
  {
    cin>>t1;
    a[t1-1]+=1;
    a[min(n-t1+1,n-1)]-=1;
  }
  for(int i=1;i<n;++i) a[i]+=a[i-1];

  for(int i=0;i<n/2;++i)
    if(a[i]%2)
      swap(s[i],s[n-i-1]),deb(a[i]);
  cout<<s;

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