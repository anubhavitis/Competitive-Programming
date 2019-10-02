//Mark XIV
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

void bin(int b[],int x)
{
  int i=3;
  while(x)
  {
    b[i--]=x%2;
    x/=2;
  }
}
void solve()
{ 
  int a[4],sum=0;
  for (int i = 0; i < 4; ++i)
  {
    cin>>a[i];
    sum+=a[i];
  }
  for(int i=0;i<16;++i)
  {
    int b[4]={},n=0;
    bin(b,i);
    for(int i=0;i<4;++i)
      if(b[i]) n+=a[i];
    deb(n)
    if(sum-n==n) { cout<<"YES"; return; }
  }
  cout<<"NO";

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
  {
    solve();
  }
}