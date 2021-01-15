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

int func(int a[],int beg,int end)
{
  int x=0,y=1,f=0,key=-1;
  map<int,int> m;
  rep(i,beg,end)
  {
    if(m[a[i]]==1)
    {
      if(f==1) return key;
      else return -1;
    }
    x=max(x,a[i]);
    m[a[i]]=1;
    if(m[y]==1)
    {
      while(m[y]==1) y++;
      y--;
    }
    if(x==y) f=1,key=x;
  }
  return key;
}
void solve()
{
  deb('-')
  int n;
  cin>>n;
  int a[n],b[n];
  rep(i,0,n) cin>>a[i],b[n-1-i]=a[i];
  
  int l1=func(a,0,n);
  deb(l1)
  int l2=func(a,max(0,l1),n);
  deb(l2)
  int L1=func(b,0,n);
  deb(L1)
  int L2=func(b,max(0,L1),n);
  deb(L2)
  if((l1+l2)==n and (L1+L2)==n )
  {
    if(l1==L2) cout<<"1\n"<<l1<<" "<<l2<<endl;
    else cout<<"2\n"<<l1<<" "<<l2<<endl<<L2<<" "<<L1<<endl;
  }
  else if( (l1+l2)==n ) cout<<"1\n"<<l1<<" "<<l2<<endl;
  else if( (L1+L2)==n ) cout<<"1\n"<<L2<<" "<<L1<<endl;
  else cout<<"0"<<endl;
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