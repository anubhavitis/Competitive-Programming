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

string getbin(unsigned ll x)
{
  string s="";
  char temp;
  while(x)
  {
    temp=('0'+(x%2));
    s = temp+s;
    x/=2;
  }
  return s;
}

void solve()
{
  
  unsigned ll x,y;
  cin>>x>>y;

  string l=getbin(x);
  string r=getbin(y);

  int l1=l.length();
  int l2=r.length();

  string str="";
  for(int i=0;i<l2-l1;++i)
    str+="0";
  l=str+l;
  //deb(l)deb(r)deb(l2)
  bool f=0;
  for (int i = 0; i < l2; ++i)
  {
    if(f) { r[i]='1'; continue; }
    if(l[i]=='0' and r[i]=='1') f=1;
  }
  unsigned ll dor=0;
  for (int i = 0; i < l2; ++i)
  {
    if(r[i]=='1')
      dor+=pow(2,l2-1-i);
  }
  cout<<dor<<"\n";
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