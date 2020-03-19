//Mark XXI
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
#define rep(a,b,c) for(int i=a; i<b; i+=c)
using namespace std;

void solve()
{
  string s;
  cin>>s;
  ll l=s.size();
  ll b=0,e=l-1;
  while(s[b]==s[e] and b<=e ) { b++, e--; }
  if(b>e) {cout<<s<<endl; return;}
  deb(b)deb(e)
  ll l1=1,l2=1;
  
  string sn=s.substr(b,e-b+1);
  string snr=sn;
  reverse(all(snr));
  ll n=sn.size();
  ll p1=0,p2=n-1;

  while(p2!=-1)
  {
    if(sn[p1]==snr[p2] and snr.substr(p2,n-p2)==sn.substr(0,n-p2)) l1=max(l1,n-p2);
    p2--;
  }
  p2=0;
  while(p1!=n)
  {
    if(sn[p1]==snr[p2] and sn.substr(p1,n-p1)==snr.substr(p2,n-p1)) l2=max(l2,n-p1);
    p1++;
  }

  if(b)
  {
    if(l2>l1) cout<<s.substr(0,b)<<s.substr(e-l2+1,l2+b)<<endl;
    else cout<<s.substr(0,l1+b)<<s.substr(e+1,b)<<endl;
    return;
  }
  if(l2>l1) cout<<s.substr(e-l2+1,l2)<<endl;
  else cout<<s.substr(0,l1)<<endl;
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