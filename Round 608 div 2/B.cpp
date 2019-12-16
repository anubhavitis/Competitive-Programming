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

void inv(string &s,int i)
{
  if(s[i]=='W') s[i++]='B';
  else s[i++]='W';

  if(s[i]=='W') s[i]='B';
  else s[i]='W';
}

void solve()
{
  int size;
  string s;
  cin>>size>>s;
  string s2=s;
  char key2,key=s[0];
  if(key=='W') key2='B';
  else key2='W';

  std::vector<int> v,v2;
  for(int i=0;i<size-1;++i)
  {
    if(s[i]==s[i+1] and s[i]==key) { ++i; continue; }
    if(s[i]==s[i+1] and s[i]!=key) 
      { v.pb(i+1); s[i]=s[i+1]=key; ++i; continue; }

    if(s[i]==key) continue;

    if(s[i]!=key) inv(s,i),v.pb(i+1);
  }
  for(int i=0;i<size-1;++i)
  {
    if(s2[i]==s2[i+1] and s2[i]==key2) { ++i; continue; }
    if(s2[i]==s2[i+1] and s2[i]!=key2) 
      { v2.pb(i+1); s2[i]=s2[i+1]=key2; ++i; continue; }

    if(s2[i]==key2) continue;

    if(s2[i]!=key2) inv(s2,i),v2.pb(i+1);
  }
  if(s[size-1]!=key and s2[size-1]!=key2) { cout<<"-1"; return; }

  if(s[size-1]==key)
  {
    cout<<v.size()<<"\n";
    for(auto i:v) cout<<i<<" ";
  }
  else 
  {
    cout<<v2.size()<<"\n";
    for(auto i:v2) cout<<i<<" " ;
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