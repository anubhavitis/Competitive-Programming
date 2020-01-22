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
vector<ll> v;
void pri(ll n) 
{ 
  v.clear();
  for (int i=2; i<=sqrt(n); i++) 
  { 
    if (n%i == 0) 
    { 
      if (n/i == i) v.pb(i); 
      else v.pb(i),v.pb(n/i); 
    } 
  } 
  sort(all(v));
}

void solve()
{
  ll n;
  cin>>n;
  if(n<24) { cout<<"NO"; return; }
  pri(n); for(auto i: v) cerr<<i<<" ";
  if(v.size()<=2) { cout<<"NO"; return; }
  if(n%(v[0]*v[1])==0 and n/(v[0]*v[1])>1 and n/(v[0]*v[1])!=v[0] and n/(v[0]*v[1])!=v[1] )
  { cout<<"YES\n"<<v[0]<<" "<<v[1]<<" "<< n/(v[0]*v[1]) ; return; }
  if(n%(v[0]*v[2])==0 and n/(v[0]*v[2])>1 and n/(v[0]*v[2])!=v[0] and n/(v[0]*v[2])!=v[2] )
  { cout<<"YES\n"<<v[0]<<" "<<v[2]<<" "<< n/(v[0]*v[2]) ; return; }
  if(n%(v[2]*v[1])==0 and n/(v[2]*v[1])>1 and n/(v[2]*v[1])!=v[2] and n/(v[2]*v[1])!=v[1] )
  { cout<<"YES\n"<<v[2]<<" "<<v[1]<<" "<< n/(v[2]*v[1]) ; return; }
  cout<<"NO";
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