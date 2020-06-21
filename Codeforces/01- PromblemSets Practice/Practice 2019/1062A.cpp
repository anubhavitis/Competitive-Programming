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
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
      cin>>a[i];
  }
  int cnt=0,cntm=0,pi=-1;
  for (int i = 1; i < n-1; ++i)
  {
    if(a[i]==a[i-1]+1 and a[i]==a[i+1]-1)
    {
      if(pi==i-1) cnt++,cntm=max(cntm,cnt),pi=i;
      else
        cnt=1,pi=i;
    }
  }
  cntm=max(cnt,cntm);
  deb(cntm)
  for (int i = 0; i < n; ++i)
  {
    if(a[i]==i+1) cntm=max(cntm,i);
    else if(a[i]==1000-n+1+i) cntm=max(cntm,n-1-i);
  }
  deb(cntm)
  cout<<cntm;
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