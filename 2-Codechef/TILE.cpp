//Mark XXII
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define int long long
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(int i=b; i<c; ++i)

using namespace std;
int x[2][2]={{1,1},{1,0}};

void multi(int F[2][2], int M[2][2]) 
{ 
  int x =  (F[0][0]*M[0][0])%(1000000007) + (F[0][1]*M[1][0])%(1000000007); 
  int y =  (F[0][0]*M[0][1])%(1000000007) + (F[0][1]*M[1][1])%(1000000007); 
  int z =  (F[1][0]*M[0][0])%(1000000007) + (F[1][1]*M[1][0])%(1000000007); 
  int w =  (F[1][0]*M[0][1])%(1000000007) + (F[1][1]*M[1][1])%(1000000007); 
  
  F[0][0] = x%(1000000007); 
  F[0][1] = y%(1000000007); 
  F[1][0] = z%(1000000007); 
  F[1][1] = w%(1000000007); 
} 
void powm(int f[2][2], int n)
{
  if(n==2)
  {
    multi(f,f);
    return;
  }
  if(n==1) return;

  powm(f,n/2);
  multi(f,f);
  if(n%2) multi(f,x);
}

void solve()
{
  int n;
  cin>>n;
  int ans[2][2]={{1,1},{1,0}};
  powm(ans,n);
  cout<<ans[0][0]<<endl;
}

main()
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
    solve();
}