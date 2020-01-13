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
  int n;
  cin>>n;

  pair<int,int> p[n];
  map< pair<int,int>, int> m;

  int t1,t2;
  for(int i=0;i<n;++i)
  {
    cin>>t1>>t2;
    p[i]=mp(t1,t2);
    if(m[p[i]]!=0)
    {
      cout<<i+1<<" "<<m[p[i]];
      return;
    }
    m[p[i]]=i+1;
  }
  sort(p,p+n);
  int key=m[p[0]],ma=p[0].second;
  for(int i=1;i<n;++i)
  {
    if(p[i].first==p[i-1].first)
    {
      cout<<m[p[i-1]]<< " " <<m[p[i]];
      return;
    }
    if(p[i].second<=ma)
    {
      cout<<m[p[i]]<<" "<<key;
      return;
    }
    else ma=max(ma,p[i].second),key=m[p[i]];
  }
  cout<<"-1 -1";
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