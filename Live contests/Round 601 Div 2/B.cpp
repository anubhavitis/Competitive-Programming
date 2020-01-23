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
  cin>>n>>m;
  int a[n];
  std::vector<pair<int,int> > v;
  std::map<int, std::vector<int> > myp;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    myp[a[i]].pb(i+1);
  }

  if(n==2 or m<n) { cout<<"-1\n"; return; }
  
  if(n==3)
  {
    
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
  cin>>t;
  while(t--)
  {
    solve();
    //cout<<"\n";
    deb('\n')
  }
}