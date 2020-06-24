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
  int n;
  cin>>s>>n;
  int l,r,k;
  while(n--)
  {
    cin>>l>>r>>k;
    k%=r-l+1;
    string ss;
    for(int i=0;i<l-1;++i) ss+=s[i];
      deb(ss)
    for(int i=k;i>0;--i) ss+=s[r-i];
      deb(ss)
    for(int i=l-1;i<=r-k-1;++i) ss+=s[i];
      deb(ss)
    for(int i=r;i<s.length();++i) ss+=s[i];  
      deb(ss)
    s=ss;
  }
  deb(s)
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
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}