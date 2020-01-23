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
  int a[n],sum=0;
  int b[n]={};

  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    if(a[i]%2) a[i]<0? b[i]=-1 : b[i]=1;
    a[i]/=2;
    sum+=a[i];
  }
  for (int i = 0; i < n; ++i)
  {
    cerr<<a[i]<<" ";
  }
  for (int i = 0; i < n and sum!=0; ++i)
  {
    if(b[i]>0 and sum<0) { a[i]++; sum++; }
    else if(b[i]<0 and sum>0) { a[i]--; sum--; }
  }

  for (int i = 0; i < n; ++i)
  {
    cout<<a[i]<<"\n";
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
    deb('\n')
    solve();
  }
}