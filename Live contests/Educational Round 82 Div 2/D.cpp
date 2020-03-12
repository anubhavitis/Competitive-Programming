//Mark XX
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
vector<unsigned ll >  block(ll x) 
{ 
  vector<ll> v; 
  vector<unsigned ll > vans;
  while (x > 0) 
  { 
    v.push_back(x % 2); 
    x = x / 2; 
  } 
  for (int i = 0; i < v.size(); i++) 
    if (v[i] == 1) 
      vans.pb(pow(2,i));
  return vans;
} 

void solve()
{
  unsigned ll n;
  ll m,sum=0;
  cin>>n>>m;
  vector<unsigned ll > need=block(n);
  vector<int> h;
  int temp;
  for(int i=0;i<m;++i)
  {
    cin>>temp;
    h.pb(temp); 
  }
  int cnt=0;
  while(1)
  {
    ll sz=h.size();
    for(ll i=0;i<need.size();++i)
      for(ll j=0;j<sz;++j)
        if(need[i]==h[j]) need[i]=h[j]=-1;
    for(ll i=0;i<sz;++i)
      if(h[i]>1) h[i]/=2,h.pb(h[i]);

    cnt++;
    int fn=1,fh=1;
    for(auto i:h) if(i!=1 and i!=-1) fh=0;
    for(auto i:need) if(i!=-1) fn=0;

    if(fh and !fn) { cout<<-1<<endl; return;}
    if(fn) { cout<<cnt<<endl; return;}
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
  cin>>t;
  while(t--)
    solve();
}