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
  int n,m,k;
  cin>>n>>m>>k;
  vector< int > sx(k),sy(k),fx(k),fy(k);
  int x,y;
  rep(i,0,k)
  {
    cin>>x>>y;
    sx[i]=x;
    sy[i]=y;
  }
  rep(i,0,k)
  {
    cin>>x>>y;
    fx[i]=x;
    fy[i]=y;
  }
  if(n==1 and m==1) cout<<"0";
  else if(n==1 and m>1)
  {
    cout<<2*m<<"\n";
    rep(i,0,m) cout<<'L';
    rep(i,0,m) cout<<'R';
  }
  else if(m==1 and n>1)
  {
    cout<<2*n<<"\n";
    rep(i,0,n) cout<<'D';
    rep(i,0,n) cout<<'U';
  }
  else
  {
    string s,sl,sr;
    rep(i,0,m-1) sl+='L',sr+='R';

    rep(i,0,n-1) s+='U';
    rep(i,0,m-1) s+='L';

    rep(i,0,n-1)
    {
      s+=sr;
      swap(sl,sr);
      s+='D';
    }
    s+=sr;
    cout<<s.size()<<endl<<s<<endl;
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
    solve();
}