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

  int a[n]={},b[n]={},z=0;
  map<int,int> m;
  string s;
  for (int i = 0; i < n; ++i)
  {
    cin>>s;
    for(auto j:s)
    {
      if(j==')' and b[i]==0) a[i]--;

      if(j=='(') b[i]++;
      else if(j==')' and b[i]) b[i]--;

    }
    if(a[i] and b[i] ) continue;
    if(a[i]) m[a[i]]++;
    if(b[i]) m[b[i]]++;
    if(a[i]==b[i]) z++;
  }

  int cnt=0;
  for( auto i: m)
  {
    if(i.first>0) break;
    int p=abs(i.first);

    cnt+=min(i.second,m[p]);
  }
  cnt+=z/2;
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