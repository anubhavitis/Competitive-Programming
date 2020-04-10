//Mark XXIII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
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
  string s;
  cin>>s;

  vector<int> v;
  int cnt=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='a') { cnt++; continue; }

    if(s[i]!='b') continue;

    if(cnt!=0)  v.pb(cnt);
    cnt=0;
  }
  if(cnt!=0)  v.pb(cnt);
  if(v.size()==0) { cout<<"0"; return; }
  ll sum=v[0];
  for(int i=1;i<v.size();++i)
    sum= (sum +( (sum*v[i])%M + v[i] )%M)%M;
  
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
    solve();
}