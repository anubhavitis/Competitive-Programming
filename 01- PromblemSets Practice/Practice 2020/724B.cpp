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
  int n,m;
  cin>>n>>m;
  int a[n][m];

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cin>>a[i][j];

  for(int x=0;x<m;++x)
    for(int j=0;j<=x;++j)
    {
      int k=1;
      for(int i=0;i<n;++i)
      {
        int f=0;
        for(int xx=0;xx<m;++xx)
        {
          if(xx==x and a[i][xx]!=j+1) f++;
          else if(xx==j and a[i][xx]!=x+1) f++;
          else if(xx!=x and xx!=j and a[i][xx]!=xx+1) { f++; }
        }
        deb(f)
        if(f!=2 and f!=0) k=0;
      }
      if(k==1) { cout<<"YES"; return;}
    }   
  // for (int i = 0; i < n; ++i)
  // {
  //   int f=0;
  //   for (int j = 0; j < m; ++j)
  //     if(a[i][j]!=j+1) f++;
  //   if(f!=0 and f!=2) { cout<<"NO"; return;}
  // }
  // cout<<"YES";
  cout<<"NO";
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