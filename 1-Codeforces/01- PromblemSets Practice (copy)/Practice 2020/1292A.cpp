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
  int n,q;
  cin>>n>>q;
  int a[n][2]={};

  int cnt=0;
  while(q--)
  {
    cin>>t1>>t2;
    t1--;t2--;
    a[t2][t1]^=1;
    deb(a[t2][t1])
    for(int i=0;i<3; ++i)
      if(t2+i-1>=0 and t2+i-1<n)
        cnt+= a[t2+i-1][t1^1]*pow(-1,a[t2][t1]);
    if(cnt==0) cout<<"yEs\n";
    else cout<<"nO\n";
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
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}