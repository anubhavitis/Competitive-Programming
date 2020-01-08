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
  cin>>n;
  int a[n];
  for (int i = 0; i < n; ++i)
    cin>>a[i];
  int cnt=0,ne=n/2,no=n-ne;
  if(a[n-1]) (a[n-1]%2)?no--:ne--;
  for (int i = 0; i < n-1; ++i)
  {
    if(a[i]==0) continue;

    if(a[i]%2) no--;
    else ne--;

    if((a[i]+a[i+1])%2 and a[i] and a[i+1])  cnt++;
  }

  int f=0;
  if(a[f]==0)
    while(a[f]==0 and f<n) f++;
  if(n==1) { cout<<"0"; return; }
deb(ne)deb(no)
  if(f!=0)
  {
    if(a[f]%2)
    {
      if(no>=f) no-=f;
      else ne=ne-(f-no),no=0,cnt++;
    }
    else
    {
      if(ne>=f) ne-=f;
      else no=no-(f-ne),ne=0,cnt++;
    }
  }
  while(f<n)
  {
    int i,c=0;
    if(a[f+1]!=0) { f++; continue; }
    for(i=f+1;a[i]==0 and i<n;++i) c++;
    if(i==n)
    {
      if(a[f]%2)
      {
        if(no>=c) no-=c;
        else ne=ne-(c-no),no=0,cnt++;
      }
      else
      {
        if(ne>=c) ne-=c;
        else no=no-(c-ne),ne=0,cnt++;
      }
      f=i;
      continue;
    }

    if((a[f]+a[i])%2)
      cnt++;
    else
    {
      if(a[f]%2)
      {
        if(no>=c) no-=c;
        else ne=ne-(c-no),no=0,cnt+=2;
      }
      else
      {
        if(ne>=c) ne-=c;
        else no=no-(c-ne),ne=0,cnt+=2;
      }
    }
    f=i;
  }
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