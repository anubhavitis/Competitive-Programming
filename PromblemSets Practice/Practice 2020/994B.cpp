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
  int n,k;
  cin>>n>>k;
  ll mx=0;
  priority_queue <int, vector<int>, greater<int> > pq;
  std::map<int, ll> m,ans;
  int p[n],c[n];
  for (int i = 0; i < n; ++i) cin>>p[i];
  for (int i = 0; i < n; ++i) cin>>c[i],m[p[i]]=c[i];

  int ind=0;
  for(auto i:m)
  {
    if(ind>k)
    {
      mx-=pq.top();
      pq.pop();
    }
    mx+=i.second;
    pq.push(i.second);
    ans[i.first]=mx;
    ind++;
  }
  for(auto i:p)
    cout<<ans[i]<<" ";
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