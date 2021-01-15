//Mark XXII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 998244353
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

#define deb(x) cerr<<#x<<" "<<x<<"\n";

#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(int i=b; i<c; ++i)
using namespace std;

void solve()
{
  ll n;
  cin>>n;
  int unm[n+1]={},bride[n+1]={};
  int x=1,y=1,dup=0;
  rep(i,0,n)
  {
    int k,temp;
    cin>>k;
    int f=1;
    while(k--)
    {
      cin>>temp;
      if(f and unm[temp]==0)
      {
        unm[temp]=1;
        while(unm[x]==1) x++;
        bride[i]=1;
        f=0;
      }
    }
    if(bride[i]!=1) 
      { dup=i+1;}
  }
  if(dup==0) cout<<"OPTIMAL\n";
  else cout<<"IMPROVE\n"<<dup<<" "<<x<<endl;
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
    solve();
}