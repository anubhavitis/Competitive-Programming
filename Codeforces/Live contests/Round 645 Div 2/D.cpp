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

  ll d[2*n];
  ll pref[2*n+1]={},cntday[2*n+1]={};
  rep(i,0,n) 
  {
    cin>>d[i];
    d[i+n]=d[i];
  }
  rrep(i,2*n-1,0)
  {
    pref[i]=pref[i+1]+sud(d[i]);
    cntday[i]=cntday[i+1]+d[i];
  }
  // deball(d)
  // deball(pref)

  ll ans=0,pos=2*n-1;

  while(pos>=n)
  {
    //find start day for cur pos
    int l=0,r=pos,mid=(l+r)/2,beg;
    while(l<=r)
    {
      if(cntday[mid]-cntday[pos+1]>=x) l=mid+1,beg=mid;
      else if(cntday[mid]-cntday[pos+1]<x) r=mid-1;

      mid=(l+r)/2;
    }
    // cerr<<beg<<" "<<pos<<endl;
    // calculate sum for current segment
    ll temp=0;
    if(beg!=pos) temp+=pref[beg+1]-pref[pos+1];
    temp+= sud(d[beg])-sud(d[beg]- x+cntday[beg+1]-cntday[pos+1] );
    // deb(x)
    // deb(temp)
    // update answer with the maximum number.
    ans=max(ans,temp);
    pos--;
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