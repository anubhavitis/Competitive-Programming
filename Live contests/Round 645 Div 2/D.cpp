//Mark XXVII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define PI 3.14159265
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define deball(x) for(auto iit:x) cerr<<iit<<" ";cerr<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 1000000007
#define LINF 1e18
#define INF INT_MAX
using namespace std;

ll i,j,n,m;
ll sud(ll beg)
{
  return (beg*(beg+1))/2;
}
void solve()
{
  ll x;
  cin>>n>>x;

  int d[n];
  ll sumarr[n],prefsum[n];
  rep(i,0,n) 
  {
    cin>>d[i];
    sumarr[i]=((ll)d[i]*((ll)d[i]+1))/2;
    if(i==0) prefsum[i]=sumarr[i];
    else prefsum[i]=prefsum[i-1]+sumarr[i];
  }
  ll l=1,ml=0,r,mr=-1;
  ll sum=0;
  while(sum<x) r=sum,sum+=d[++mr];
  r=x-r;
  ll ans=prefsum[mr-1]+ sud(r);
  while(ml<n and l<=d[n-1])
  {
    if( (d[mr-1]-r) < (d[ml-1]-l) )
    {
      l=d[mr-1]-r+1;
      ans=max(ans,sud(d[ml])-sud(l-1)+prefsum[mr]-prefsum[ml]+1);
      r=1;
      mr=(mr+1)%n;
    }
    else if((d[mr-1]-r) == (d[ml-1]-l))
    {
      l=1;
      ml++;
      if(ml==n) break;
      ans=max(ans,prefsum[mr]-prefsum[ml-1]+1);
      r=1;
      mr=(mr+1)%n;
    }
    else
    {
      l=1;
      ml++;
      if(ml==n) break;
      r+=(d[ml-1]-l);
      ans=max(ans,prefsum[mr-1]-prefsum[ml-1]+sud(r));
    }
  }
  cout<<ans<<endl;
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
  // cin>>t;
  while(t--)
    solve();
} 