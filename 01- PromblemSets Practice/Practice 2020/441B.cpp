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

int t1,t2;

using namespace std;

void solve()
{
  int n,v;
  cin>>n>>v;
  map<int,int> m;
  int ma=-1;
  for (int i = 0; i < n; ++i)
  {
    cin>>t1>>t2;
    ma=max(ma,t1);
    m[t1]+=t2;
  }
  ll sum=0;
  int day=1;
  while(day<=ma+1)
  {
    t1=v;
    t1-=min(m[day-1],v);
    sum+=v-t1;
    if(t1!=0)
    {
      t1=min(t1,m[day]);
      m[day]-=t1;
      sum+=t1;
    }
    day++;
    deb(sum)
  }
  cout<<sum;
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