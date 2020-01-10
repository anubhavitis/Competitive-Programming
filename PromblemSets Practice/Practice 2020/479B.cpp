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
  int a[n];
  map<int,vector<int> > m;
  for(int i=0;i<n;++i) cin>>a[i],m[a[i]].pb(i+1);
  vector< pair<int,int> > v;
  int mi=INT_MAX,ind=0,t=0;
  sort(a,a+n);
  if(a[n-1]==a[0]) { cout<<"0 0"; return; }
  while(t++<k)
  {
    
    // deb(mi)deb(ind)
    v.pb(mp(m[a[n-1]].back(),m[a[0]].back()));
    m[a[n-1]-1].pb(m[a[n-1]].back());
    m[a[n-1]].pop_back();
    a[n-1]--;
    m[a[0]+1].pb(m[a[0]].back());
    m[a[0]].pop_back();
    a[0]++;
    for(auto i:a) cerr<<i<<" ";deb(' ')
    sort(a,a+n);
    if(mi>a[n-1]-a[0]) mi=a[n-1]-a[0],ind=t;
    deb(mi)
  }
  cout<<mi<<" "<<ind<<"\n";
  for (int i = 0; i < ind; ++i)
    cout<<v[i].first<<" "<<v[i].second<<"\n";
  
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