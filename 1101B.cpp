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
  string s;
  cin>>s;
  int l=s.size();
  int x=0,y=l-1;
  int ans=0;
  
  for (;x < l; ++x)
    if(s[x]!='[') ans++;
    else break;
  for (;y>=0;--y)
    if(s[y]!=']') ans++;
    else break;
  
  deb(x)deb(y)
  int cx=x+1,cy=y-1;
  while(s[cx]!=':') cx++,ans++;
  while(s[cy]!=':') cy--,ans++;

  deb(cx) deb(cy) 
  for (int i = cx+1; i < cy; ++i)
    if(s[i]!='|') ans++,deb(i)

  if(x>=y or cx>=cy) cout<<"-1";
  else cout<<ans;
  
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