//Mark XXVI
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j;
using namespace std;

void solve()
{
  string s;
  cin>>s;
  std::vector<int> ve,vo;
  for(auto it:s)
  {
    if((it-'0')%2) vo.pb((it-'0'));
    else ve.pb((it-'0'));
  }
  string sum;
  i=0;j=0;
  while(i<vo.size() and j<ve.size())
  {
    if(vo[i]<ve[j]) sum+=char('0'+vo[i++]);
    else sum+=char('0'+ve[j++]);
  }
  while(i<vo.size()) sum+=char('0'+vo[i++]);
  while(j<ve.size()) sum+=char('0'+ve[j++]);

  cout<<sum<<endl;  
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