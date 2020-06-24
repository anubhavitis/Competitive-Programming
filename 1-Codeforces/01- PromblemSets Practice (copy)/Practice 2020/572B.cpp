//Mark XVIII
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

using namespace std;

void solve()
{
  int n,s;
  cin>>n>>s;
  std::map<int, int> mb,ms;
  char ch;int p,q;
  std::vector<int> v;
  for (int i = 0; i < n; ++i)
  {
    cin>>ch>>p>>q;
    if(ch=='B') 
    {
      if(mb[p]==0) v.pb(p);
      mb[p]+=q;
    }
    else ms[p]+=q;
  }
  sort(all(v),big(int));
  stack<int> msk;
  int n_ms=ms.size();
  int t=min( n_ms ,s);
  for(auto i:ms)
  {
    msk.push(i.first);
    if(--t==0) break;
  }
  int n_msk=msk.size();
  for (int i = 0; i < min(s,n_msk); ++i)
  {
    cout<<"S "<<msk.top()<<" "<<ms[msk.top()]<<"\n";
    msk.pop();
  }
  int n_v=v.size();
  for (int i = 0; i < min(n_v,s); ++i)
  {
    cout<<"B "<<v[i]<<" "<<mb[v[i]]<<"\n";
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