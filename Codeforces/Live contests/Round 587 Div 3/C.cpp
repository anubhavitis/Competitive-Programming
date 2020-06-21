//Mark XIV
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
  int z,x=5,y=-10,a=4,b=2;
  z=x++ - --y*b/a;
  cout<<z;
  // ll x[7],y[7];
  // cin>>x[1]>>y[1]
  //    >>x[2]>>y[2]
  //    >>x[3]>>y[3]
  //    >>x[4]>>y[4]
  //    >>x[5]>>y[5]
  //    >>x[6]>>y[6];
  
  // if(x[3]<x[1]) x[3]=x[1];
  // if(x[5]<x[1]) x[5]=x[1];
  // if(x[4]>x[2]) x[4]=x[2];
  // if(x[6]>x[2]) x[6]=x[2];

  // if(y[3]<y[1]) y[3]=y[1];
  // if(y[5]<y[1]) y[5]=y[1];
  // if(y[4]>y[2]) y[4]=y[2];
  // if(y[6]>y[2]) y[6]=y[2];
  
  // if(y[3]<y[5] and y[5]<y[4])
  // {
  //   y[5]=y[4];
  //   if(y[6]<y[4]) y[6]=y[4];
  // }
  // if(y[5]<y[3] and y[6]>y[3])
  // {
  //   y[3]=y[6];
  //   if(y[4]<y[6]) y[4]=y[6];
  // }

  // if(x[3]<x[5] and x[5]<x[4])
  // {
  //   x[5]=x[4];
  //   if(x[6]<x[4]) x[6]=x[4];
  // }
  // if(x[5]<x[3] and x[6]>x[3])
  // {
  //   x[3]=x[6];
  //   if(x[4]<x[6]) x[4]=x[6];
  // }

  // unsigned ll ar1=(x[2]-x[1])*(y[2]-y[1]);
  // unsigned ll ar2=(x[4]-x[3])*(y[4]-y[3]);
  // unsigned ll ar3=(x[6]-x[5])*(y[6]-y[5]);
  // deb(ar1) deb(ar2) deb(ar3)
  // if(ar1>(ar2+ar3)) cout<<"YES";
  // else cout<<"NO";

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
  }
}