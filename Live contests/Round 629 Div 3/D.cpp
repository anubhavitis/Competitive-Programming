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
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(int i=b; i<c; ++i)

using namespace std;

void solve()
{
  int n;
  cin>>n;
  int a[n],c[n]={};
  rep(i,0,n) cin>>a[i];
  if(n==3)
  {
    if(a[0]==a[1] and a[1]==a[2]) cout<<"1\n1 1 1\n";
    else if(a[0]==a[1]) cout<<"2\n1 1 2\n";
    else if(a[1]==a[2]) cout<<"2\n1 2 2\n";
    else if(a[0]==a[2]) cout<<"2\n1 2 1\n";
    else cout<<"3\n1 2 3\n";
    return;
  }

  c[0]=1;
  if(c[0]==c[1] and c[1]==c[n-1]) c[1]=c[n-1]=1;
  else if(c[0]==c[1]) c[1]=1,c[n-1]=2;
  else if(c[0]==c[n-1]) c[1]=2,c[n-1]=1;

  int f=0;
  rep(i,2,n-1)
  {
    if(a[i-1]==a[i] and a[i]==a[i+1]) c[i]=c[i-1];
    else if( a[i-1]==a[i] and c[i+1]==0 ) c[i]=c[i-1];
    else if( a[i-1]==a[i] )
    {
      int x=c[i-1],y=c[i+1];
      int mi=min(x,y),ma=max(x,y);
      if(mi==1 and ma==3) c[i]=2;
      else if(mi==1 and ma==2) f=1,c[i]=3;
      else if(mi==1 and ma==1) c[i]=2;
      else if(mi==2 and ma==2) c[i]=1;
      else if(mi==3 and ma==3) c[i]=2;
    }
    else if( a[i+1]==a[i] and c[i+1]==0)
    {
      if(c[i-1]==1) c[i]=2;
      else if(c[i-1]==3) c[i]=2;
      else c[i]=1;
    }
    else if( a[i+1]==a[i] )
    {
      if(c[i+1]!=c[i-1]) c[i]=c[i+1];
      else
      {
        if(c[i-1]==1) c[i]=2;
        else if(c[i-1]==3) c[i]=2;
        else c[i]=1;   
      }
    }
    else if(c[i+1]==0)
    {
      if(c[i-1]==1) c[i]=2;
      else if(c[i-1]==3) c[i]=2;
      else c[i]=1;
    }
    else
    {
      int x=c[i-1],y=c[i+1];
      int mi=min(x,y),ma=max(x,y);
      if(mi==1 and ma==3) c[i]=2;
      else if(mi==1 and ma==2) f=1,c[i]=3;
      else if(mi==1 and ma==1) c[i]=2;
      else if(mi==2 and ma==2) c[i]=1;
      else if(mi==3 and ma==3) c[i]=2;
    }
  }
  if(f) cout<<"3\n";
  else cout<<"2\n";
  for(auto i:c) cout<<i<<" ";
  cout<<endl;
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