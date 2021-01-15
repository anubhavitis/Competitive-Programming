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
  int d=1,t=2;
  c[0]=1;
  int f=0,key=INT_MAX;
  rep(i,1,n)
  {
    if(a[i]!=a[i-1]) swap(d,t);
    else key=min(i-1,key);
    if(d==2) f=1;
    c[i]=d;
  }
  if(a[0]!=a[n-1] and c[0]==c[n-1])
  {
    if(key!=INT_MAX)
      rep(i,key+1,n)
      {
        if(c[i]==2) c[i]--;
        else c[i]++;
      }
    else
    c[n-1]=3;
  }
  if(c[n-1]==3) cout<<"3\n";
  else if(f) cout<<"2\n";
  else cout<<"1\n"; 

  rep(i,0,n)cout<<c[i]<<" ";
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