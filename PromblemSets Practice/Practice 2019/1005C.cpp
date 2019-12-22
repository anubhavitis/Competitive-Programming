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
  int temp;
  std::map<int, int> m;
  for (int i = 0; i < n; ++i)
  {
    cin>>temp;
    m[temp]++;
  }
  int cnt=0;
  for(auto i:m)
  {
    int s=i.first;
    int x=2,f=1;
    for(int i=1;i<31;++i,x=x<<1)
    {
      if(x<s) continue;
      if(x-s==s and m[s]>1) { f=0; break;}
      if(x-s!=s and m[x-s]) { f=0; break; }
    }
    
    if(f) cnt+=m[s],deb(s)
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