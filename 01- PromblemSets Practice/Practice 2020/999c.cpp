//Mark XXII
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
#define rep(i,b,c) for(int i=b; i<c; ++i)

using namespace std;

void solve()
{
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;

  int a[26]={};
  for(auto i:s) a[i-'a']++;
  rep(i,0,26)
  {
    if(a[i]==0) continue;
    rep(j,0,s.size())
      if(s[j]==('a'+i))
      {
        a[i]--;
        k--;
        s.erase(s.begin()+j);
        j--;
        if(k==0 or a[i]==0) break;
      }
      if(k==0) break;
  }
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
  //cin>>t;
  while(t--)
    solve();
}