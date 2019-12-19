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
  string s;
  int a[n]={};
  for (int i = 0; i < n; ++i)
  {
    cin>>s;
    for(auto c:s)
      if(c=='(') a[i]++;
      else a[i]--;
  }
  std::map<int, int> po,ne;
  for (int i = 0; i < n; ++i)
  {
    if(a[i]>=0) po[a[i]]++;
    else ne[a[i]]++;
  }

  int ans=0;
  for(auto i:ne)
    ans+=min(i.second,po[(-1)*i.first]);
  if(po[0]>1) ans+=po[0]/2;

  // for(auto i:po) cerr<<i.first<<" "<<i.second<<"\n";
  // for(auto i:ne) cerr<<i.first<<" "<<i.second<<"\n";

  cout<<ans;

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