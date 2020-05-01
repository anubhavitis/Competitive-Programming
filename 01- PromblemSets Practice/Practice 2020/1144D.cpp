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
int ii,j;
using namespace std;

void solve()
{
  int n;
  cin>>n;
  int a[n],fr[200001]={};
  rep(ii,0,n) cin>>a[ii],fr[a[ii]]++;
  int num=-1,cnt=0;
  rep(ii,0,200001) if(cnt<fr[ii]) cnt=fr[ii],num=ii;

  cout << n - cnt << "\n";
  int indexMostFreq=find(a,a+n,num)-a,mostFreq=num;
  for (int i = indexMostFreq - 1; i >= 0; --i)
  {
    if (a[i] != a[i + 1])
    {
      short type = (a[i] < a[i + 1]?1:2);
      cout << type << " " << i + 1 << " " << i + 2 << endl;
    }
 
    a[i] = a[i + 1];
  }
  
  for (int i = 1; i < n; ++i)
  {
    if (a[i] != mostFreq)
    {
      short type = (a[i] < a[i - 1]?1:2);
      cout << type << " " << i + 1 << " " << i << "\n";
    }
 
    a[i] = mostFreq;
  }
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