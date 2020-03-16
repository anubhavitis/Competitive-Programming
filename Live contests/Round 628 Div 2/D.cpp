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
  unsigned ll u,v;
  cin>>u>>v;
  if(v<u or (v-u)%2!=0)
    { cout<<"-1"; return; }
  if( u==v and v==0)
    { cout<<"0"; return;}
  if( u==v)
    { cout<<"1\n"<<u; return;}
  unsigned ll r=(v-u)/2, t=u^r;
  if(t==u+r)
    { cout<<"2\n"<< t <<" "<<r; return; }
  else { cout<<"3\n"<<u<<" "<<r<<" "<<r; return; }
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