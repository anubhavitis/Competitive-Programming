//Mark XVI
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
 map<int,vector< pair<int,int> > > m;
 int x,y,v;
 for (int i = 0; i < n; ++i)
  {
    cin>>x>>y>>v;
    m[v].pb(mp(x,y));
  } 

  for(auto i:m)
  {
    std::vector< pair<int,int> > vec=i.second;
    bool x[vec.size()]={};
    for (int i = 0; i < vec.size(); ++i)
    {
      x[i]=1;
      int x1,y1;
      x1=vec[i].first;
      y1=vec[i].second;
      int cnt=0;
      for (int j = 0; j < vec.size(); ++j)
      {
        if(x[j]==1) continue;
        int x2,y2;
        x2=vec[j].first;
        y2=vec[j].second;

        if(x1==x2 or y1==y2 or x1==y2 or x2==y1) 
        {
          cnt++;
          x[j]=1;
          continue;
        }
        if(x1<x2)
        {
          if(y1>x2) 
          {
            cnt++;
            x[j]=1;
            continue;
          }
        }
        else if(x1>x2 and x1<y2)
        {
          cnt++;
          x[j]=1;
          continue;
        }
      }
      if(cnt>=2)
      {
        cout<<"NO\n";
        return;
      }
    }
  }
  cout<<"YES\n";

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
    deb('\n')
    solve();
  }
}