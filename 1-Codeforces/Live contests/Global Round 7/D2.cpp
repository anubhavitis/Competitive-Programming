//Mark XXI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(a,b,c) for(int i=a; i<b; i+=c)
using namespace std;

int maxpal(string s)
{
  string s_=s;
  reverse(all(s_));
  s=s+'#'+s_;
  int n=s.size();
  vector<int> v(n,0);

  rep(1,n,1)
  {
    int j=v[i-1];
    while (j > 0 && s[i] != s[j])
      j = v[j-1];
    if(s[j]==s[i]) j++;
    v[i]=j;
  }
  return v.back();
}
void solve()
{
  string s;
  cin>>s;
  string sn=s;
  reverse(all(sn));
  if(s==sn) { cout<<s<<endl; return; }
  int n=s.length();
  string a1,a3;
  int b=0;
  while(s[b]==s[n-1-b] and b<=n-1-b) a1+=s[b++];
  a3=a1;
  reverse(all(a3));
  s=s.substr(b,n-2*b);
  string ns=s;
  reverse(all(ns));
  
  int l1=maxpal(s);
  int l2=maxpal(ns);
  string ans;
  if(l2>l1) ans=ns.substr(0,l2);
  else ans=s.substr(0,l1);

  cout<<a1<<ans<<a3<<endl;


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