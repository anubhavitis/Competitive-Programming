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
  int a[3],b[3];
  cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];

  if(a[0]==a[1]==a[2])
    { 
      if(b[0]==b[1]==b[2])
        { cout<<"FAIR\n"; return; }
      else
        
    }
  if(a[0]==a[1] and b[0]==b[1] )
  {
    if(a[2]>a[1] and b[2]>b[1])
      { cout<<"FAIR\n"; return; }
    if(a[2]<a[1] and b[2]<b[1])
      { cout<<"FAIR\n"; return; }
  }
  if(a[2]==a[1] and b[2]==b[1] )
  {
    if(a[0]>a[1] and b[0]>b[1])
      { cout<<"FAIR\n"; return; }
    if(a[0]<a[1] and b[0]<b[1])
      { cout<<"FAIR\n"; return; }
  }
  if(a[0]==a[2] and b[0]==b[2] )
  {
    if(a[0]>a[1] and b[0]>b[1])
      { cout<<"FAIR\n"; return; }
    if(a[0]<a[1] and b[0]<b[1])
      { cout<<"FAIR\n"; return; }
  }
  if(a[0]>a[1] and b[0]>b[1] )
  {
    if(a[2]>a[1] and b[2]>b[1])
      { cout<<"FAIR\n"; return; }
    if(a[2]<a[1] and b[2]<b[1])
      { cout<<"FAIR\n"; return; }
  }
  if(a[0]<a[1] and b[0]<b[1] )
  {
    if(a[2]>a[1] and b[2]>b[1])
      { cout<<"FAIR\n"; return; }
    if(a[2]<a[1] and b[2]<b[1])
      { cout<<"FAIR\n"; return; }
  }
  cout<<"NOT FAIR\n";
  return;
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
  int t=1;
  cin>>t;
	while(t--)
	{
		solve();
	}
}