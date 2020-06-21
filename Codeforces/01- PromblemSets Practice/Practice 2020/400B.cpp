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
  int n,m;
  cin>>n>>m;
  string s[n];
  set<int> ms;
  for(int i=0;i<n;++i)
  {
    cin>>s[i];
    int g=-1,S=-1;
    for (int j = 0; j < m; ++j)
    {
      if(s[i][j]=='G') g=j;
      else if(s[i][j]=='S') S=j;
    }
    deb(S)
    if(g>S) { cout<<"-1"; return;}
    ms.insert(S-g);
    deb(S-g)
  }
  cout<<ms.size();
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