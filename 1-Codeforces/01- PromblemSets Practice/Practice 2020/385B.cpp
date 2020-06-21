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
  string s;
  cin>>s;
  int i,j,pi=-1;
  ll ans=0;
  if(s.length()<4) { cout<<"0"; return; }
  for(int ii=0;ii<s.length()-3;++ii)
  {
    if(s[ii+0]=='b' and s[ii+1]=='e' and s[ii+2]=='a' and s[ii+3]=='r')
    {
      i=ii,j=ii+3;
      ans+=(ii-pi)*(s.length()-j);
      pi=ii;
    }
  }
  cout<<ans;
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