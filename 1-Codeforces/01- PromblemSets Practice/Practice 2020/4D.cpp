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

ll i,j,n,m,k;

void solve()
{
  int w,h;
  cin>>n>>w>>h;
  map< pair<int,int>, int> mapi;
  vector<pair<int,int> > p(n);
  int x,y;
  rep(i,0,n)
  {
    cin>>x>>y;
    if(x<=w or y<=h) continue;
    p[i]=mp(x,y);
    mapi[p[i]]=i+1;
  }

  sort(p.begin(),p.end());
  // for(auto it: p) cerr<<it.first<<" "<<it.second<<endl;
  int arr[n+1]={};
  rep(i,0,n) if(p[i].first>w and p[i].second>h) break;
  int ans=0;
  rep(j,i,n)
  {
    arr[j]=1;
    rep(m,i,j) if(p[j].first>p[m].first and p[j].second>p[m].second) arr[j]=max(arr[j],1+arr[m]);
    ans=max(ans,arr[j]);
  }
  // deball(arr)
  rrep(i,n-1,0) if(arr[i]==ans and w<p[i].first and h<p[i].second) break;
  cout<<ans<<endl;
  if(ans==0) return;
  int prev=i;
  stack<int> s;
  s.push(mapi[p[prev]]);
  ans--;

  while(i-->=0)
    if(ans>0 and arr[i]==ans and p[i].first<p[prev].first and p[i].second<p[prev].second)
      s.push(mapi[p[i]]),ans--,prev=i;

  while(s.size())
  {
    cout<<s.top()<<" ";
    s.pop();
  }
  cout<<endl;
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