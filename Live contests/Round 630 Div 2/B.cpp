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
  int pri[]={2,3,5,7,11,13,17,19,23,29,31};
  int n;
  cin>>n;
  int a[n],ans[n]={};  
  rep(i,0,n)  cin>>a[i];
  int ma=0,ind=0;
  rep(i,0,11)
  {
    rep(j,0,n)
    if(ans[j]==0 and a[j]%pri[i]==0) ans[j]=ind+1,ma=ind+1;
    if(ma==ind+1) ind++;
  }
  cout<<ma<<endl;
  for(auto i:ans) cout<<i<<" ";
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
  cin>>t;
  while(t--)
    solve();
}