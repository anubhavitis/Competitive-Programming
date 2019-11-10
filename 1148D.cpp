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
  map<pair<int,int>,int > m;
  std::vector<pair<int,int> > p1,p2;
  int x,y;
  for (int i = 0; i < n; ++i)
  {
    cin>>x>>y;
    m[mp(x,y)]=i+1;
    if(y>x) p1.pb(mp(x,y));
    else p2.pb(mp(y,x));
  }
  if(p1.size()>p2.size())
  {
    sort(all(p1));
    cout<<p1.size()<<"\n";
    for(vector<pair<int,int> >::iterator i=p1.end()-1;i>=p1.begin();--i)
      cout<<m[*i]<<" ";
  }
  else 
  {
    sort(all(p2));
    cout<<p2.size()<<"\n";
    for(auto i:p2)
      cout<<m[mp(i.second,i.first)]<<" ";
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
    deb('\n')
    solve();
    cout<<"\n";
  }
}