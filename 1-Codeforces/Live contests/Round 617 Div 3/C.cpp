//Mark XIX
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

int t1,t2;

using namespace std;

void solve()
{
  int n;
  string s;
  cin>>n>>s;
  map< pair<int,int>, int> gone;
  gone[mp(0,0)]=1;
  int x=0,y=0,size=INT_MAX,l=-1,r=-1;  
  for(int i=0;i<n;++i)
  {
    if(s[i]=='L') x--;
    else if(s[i]=='R') x++;
    else if(s[i]=='U') y++;
    else if(s[i]=='D') y--;

    if(gone[mp(x,y)])
      {
        int ns=i+2-gone[mp(x,y)]+1;
        if(ns<size) l=gone[mp(x,y)],r=i+1,size=ns;
      }
    gone[mp(x,y)]=i+2;
  }
  if(size==INT_MAX) cout<<"-1"<<endl;
  else cout<<l<<" "<<r<<endl;
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
  {
    solve();
  }
}