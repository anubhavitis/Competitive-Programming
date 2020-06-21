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
  int n,m;
  cin>>m>>n;
  int a[m][n];
  int r[m]={},c[n]={};
  
  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j)
      cin>>a[i][j];

  for (int i = 0; i < m; ++i)
  {
    r[i]=1;
    for (int j = 0; j < n; ++j)
    {
      if(a[i][j]==0) r[i]=0;
    }
  }
  for (int i = 0; i < n; ++i)
  {
    c[i]=1;
    for (int j = 0; j < m; ++j)
    {
      if(a[j][i]==0) { c[i]=0; break; }
    }
  }

  int f=0,F=0;
  for (int i = 0; i < m; ++i)
  {
    if(r[i]==1) f=1;
  }
  for (int i = 0; i < n; ++i)
  {
    if(c[i]==1) F=1;
  }
  if(f^F) { cout<<"NO\n"; return; }
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      if(a[i][j])
        if(!r[i] and !c[j])
        {
          cout<<"NO\n";
          return;
        }
    }
  }
  // for (int i = 0; i < m; ++i)
  // {
  //   cerr<<r[i]<< " ";
  // }
  // cerr<<"\n";
  // for (int i = 0; i < n; ++i)
  // {
  //   cerr<<c[i]<< " ";
  // }
  
  cout<<"YES\n";
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cout<<(r[i] and c[j])<<" ";
    }
    cout<<"\n";
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