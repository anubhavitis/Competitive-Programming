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
  int n;
  cin>>n;
  pair<int,int> p[n];
  for(int i=0;i<n;++i)
  {
    cin>>t1>>t2;
    p[i]=mp(t1,t2);
  }
  sort(p,p+n);
  string s;
  t1=t2=0;
  for(auto j: p)
  {
    int x=j.first,y=j.second;
    if(x<t1 or y<t2) { cout<<"NO"; return; }
    for(int i=0;i<(x-t1);++i) s+='R';
    for(int i=0;i<(y-t2);++i) s+='U';
    t1=x;
    t2=y;
  }
  cout<<"YES\n";
  cout<<s;
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
    solve();
    cout<<"\n";
    deb('\n')
  }
}