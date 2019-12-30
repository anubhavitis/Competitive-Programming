//Mark XVII
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
  int n,k1,k2;
  cin>>n>>k1>>k2;
  int m1=-1,m2=-1,temp;
  for (int i = 0; i < k1; ++i)
  {
    cin>>temp;
    m1=max(temp,m1);
  }
  for (int i = 0; i < k2; ++i)
  {
    cin>>temp;
    m2=max(temp,m2);
  }
  if(m1>m2) cout<<"YES";
  else cout<<"NO";
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
    cout<<"\n";
    deb('\n')
  }
}