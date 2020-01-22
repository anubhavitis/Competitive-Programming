//Mark XIX
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

int t1,t2;

using namespace std;

void solve()
{
  int q,x;
  cin>>q>>x;
  map<int,int> m;
  int mex=0;
  int top;cin>>top;
  m[top]=10;
  mex=(top>0)? 0:1;
  cout<<mex<<endl;
  while(q-->1)
  {
    cin>>top;
    
    if(top==mex)
    {
      m[mex]=10;
      for(;m[mex]==10;mex++);
      cout<<mex<<"\n";
    }
    else if(top>x)
    {
      int dup=top;
      for(;dup>mex;dup-=x);
      if(dup==mex)
      {
        m[mex]=10;
        for(;m[mex]==10;mex++);
        cout<<mex<<"\n";
      }
      else
      {
        if(m[top]==10)
          for(;m[top]==10;top+=x);
        m[top]=10;
        cout<<mex<<"\n";
      }
    }
    else if(top<x)
    {
      int dup=top;
      for(;dup<mex;dup+=x);
      if(dup==mex)
      {
        m[mex]=10;
        for(;m[mex]==10;mex++);
        cout<<mex<<"\n";
      }
      else
      {
        if(m[top]==10)
          for(;m[top]==10;top+=x);
        m[top]=10;
        cout<<mex<<"\n";
      }
    }
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