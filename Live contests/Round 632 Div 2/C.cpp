//Mark XXIII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)

using namespace std;

void solve()
{
  int temp,s;
  ll i;
  cin>>s;
  ll a[s];
  rep(i,0,s) cin>>temp;

  ll cma[s];
  map<ll,vector<ll> > m;
  vector< pair<ll,ll> > vp;
  cma[0]=a[0];
  m[0].pb(-1);
  m[cma[0]].pb(0);
  rep(i,1,s) 
  {
    cma[i]=cma[i-1]+a[i];
    if(m[cma[i]].size()>0)
      vp.pb(mp( (m[cma[i]].back())+1 ,i));
    m[cma[i]].pb(i);
  }
  ll ans=0;
  int arr[s]={};
  for(auto it:vp)
  {
    arr[it.first]++;
    arr[it.second+1]--;
  }
  rep(i,1,s) arr[i]+=arr[i-1];
  vector< pair<ll,ll> > np;
  ll x=0,inc=0,on=0,dec=0;
  if(arr[1]>arr[0]) inc++;
  else if(arr[1]==arr[0]) on++;
  else dec++;
  rep(i,1,s)
  {
    if(inc and arr[i]<=arr[i-1])
    {
      np.pb(mp(x,i-1));
      x=i-1;
      inc=0;
      if(arr[i]==arr[i-1] ) on=1;
      else dec=1;
    }
    if(on and arr[i]!=arr[i-1])
    {
      np.pb(mp(x,i-1));
      x=i-1;
      on=0;
      if(arr[i]>arr[i-1]) inc=1;
      else dec=1;
    }
    if(dec and arr[i]>=arr[i-1])
    {
      np.pb(mp(x,i-1));
      x=i-1;
      dec=0;
      if(arr[i]==arr[i-1]) on=1;
      else inc=1;
    }
  }
  for(auto it:np) cout<<it.first<<" "<<it.second<<"\n";
  // cout<<ans;

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
    solve();
} 