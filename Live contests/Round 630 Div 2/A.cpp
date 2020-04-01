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
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int x,x1,x2,y,y1,y2;
  cin>>x>>y>>x1>>y1>>x2>>y2;
  int rm=x2-x,lm=x-x1,um=y2-y,dm=y-y1;
  deb(rm) deb(lm) deb(um) deb(dm)
  int rr=(b>a)?b-a:0;
  int lr=(b>a)?0:a-b;
  int ur=(d>c)?d-c:0;
  int dr=(d>c)?0:c-d;
  deb(rr) deb(lr) deb(ur) deb(dr)
  if(lm==0 and rm==0 and (a!=0 or b!=0)) cout<<"No\n";
  else if(um==0 and dm==0 and (c!=0 or d!=0)) cout<<"No\n";
  else if((rm>=rr and lm>=lr) and (um>=ur and dm>=dr)) cout<<"Yes\n";
  else cout<<"No\n";
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