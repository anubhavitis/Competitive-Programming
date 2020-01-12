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
  int n;
  cin>>n;

  int m[6]={};

  int temp,ans=0;
  for (int i = 0; i < n; ++i)
  {
      cin>>temp;
      if(temp==4) m[0]++;
      else if(temp==8 and m[0]>m[1]) m[1]++;
      else if(temp==15 and m[1]>m[2]) m[2]++;
      else if(temp==16 and m[2]>m[3]) m[3]++;
      else if(temp==23 and m[3]>m[4]) m[4]++;
      else if(temp==42 and m[4]>m[5]) m[5]++;
      else ans++;
  }
  for (int i = 0; i < 5; ++i)
  {
    ans+=m[i]-m[5];
  }
  cout<<ans;
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
    deb('\n')
    solve();
    cout<<"\n";
  }
}