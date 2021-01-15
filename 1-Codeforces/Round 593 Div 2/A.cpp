//Mark XVI
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  int A=a,B=b,C=c;
  int ans=0,ans2=0;
  
  ans+=3*min(b,c/2);
  b-=min(b,c/2);

  ans+=3*min(a,b/2);



  ans2+=3*min(B/2,A);
  B-=2*min(B/2,A);

  ans2+=3*min(B,C/2);
  
  cout<<max(ans,ans2)<<"\n";
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
    deb('\n')
    solve();
  }
}