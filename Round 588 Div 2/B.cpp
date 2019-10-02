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

void solve()
{ 
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  if(n==1)
  {
    if(k==0) cout<<s;
    else cout<<'0';
    return; 
  }
  if(s[0]!='1' and k>0) { s[0]='1'; k--;}
  for(int i=1;i<n && k;++i)
  {
    if(s[i]!='0')
    {
      s[i]='0';
      k--;
    }
  }  
  cout<<s;
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