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

int maxt(int a,int b,int c)
{
  return max(a,max(b,c));
}

int mint(int a,int b,int c)
{
  return min(a,min(b,c));
}

void solve()
{
  int c,m,x;
  cin>>c>>m>>x;
  int sum=0;
  while(1)
  {
    if(c==0 or m==0)
    {
      cout<<sum<<"\n";
      return;
    }
    if(c==m and x==0)
    {
      sum+=(c/3)*2;
      m=c=c%3;
      if(c==2) sum++;

      cout<<sum<<"\n";
      return;
    }
    if(x==0)
    {
      x=abs(c-m);
      c=m=max(c,m)-x;
    }
    int t=mint(c,m,x);
    sum+=t;
    c-=t;
    m-=t;
    x-=t;

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
  cin>>t;
  while(t--)
  {
    solve();
  }
}