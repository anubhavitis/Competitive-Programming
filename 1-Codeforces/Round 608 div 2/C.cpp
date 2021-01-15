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
  int n,sx,sy;
  cin>>n>>sx>>sy;
  int d[4]={};
  int a,b;
  for (int i = 0; i < n; ++i)
  {
    cin>>a>>b;
    if(a!=sx) d[a>sx?0:2]++;
    if(b!=sy) d[b>sy?1:3]++;
  }
  int m=-1,key=-1;
  for (int i = 0; i < 4; ++i)
    if(m<d[i]) m=d[i],key=i;

  cout<<m<<"\n";
  if(key%2) cout<<sx<<" "<<((key==1)?sy+1:sy-1);
  else cout<<((key==0)?sx+1:sx-1)<<" "<<sy;
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