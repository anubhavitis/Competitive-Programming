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
  string ans,s;
  int a[4];
  for (int i = 0; i < 4; ++i)
  {
    cin>>s;
    a[i]=s.length();
    a[i]-=2;
  }
  for (int i = 0; i < 4; ++i)
  {
    bool f1=true,f2=true;
    for (int j = 0; j < 4; ++j)
    {
      if(i==j) continue;
      if( a[i] > a[j]/2 ) f1=false;
      if( a[i] < a[j]*2 ) f2=false;
    }
    if(f1 or f2) ans+=('A'+i);
  }
  if(ans.size()!=1) cout<<'C'; 
  else cout<<ans;
  for (int i = 0; i < 4; ++i)
  {
    cerr<<a[i]<<" ";
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