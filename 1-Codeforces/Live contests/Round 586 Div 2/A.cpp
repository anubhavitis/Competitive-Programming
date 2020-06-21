//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
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
  int a[5]={};
  string s;
  cin>>s;
  for (int i = 0; i < n; ++i)
  {
    if(s[i]=='z') a[0]++;
    else if(s[i]=='e') a[1]++;
    else if(s[i]=='r') a[2]++;
    else if(s[i]=='o') a[3]++;
    else if(s[i]=='n') a[4]++;
  }
  int z=a[0],o=a[4];
  deb(z)deb(o)
  while(o--)  cout<<"1 ";
  while(z--)  cout<<"0 ";

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