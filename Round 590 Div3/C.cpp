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
  int n;
  cin>>n;
  string a,b;
  cin>>a>>b;

  int xp=0,yp=1,x=1,y=1;
  while(1)
  {
    if( ( y==0 and (b[x-1]=='1' or b[x-1]=='2') ) or
        ( y==1 and (a[x-1]=='1' or a[x-1]=='2') ) )
    {
      if(yp==y and xp==x-1)
      {
       x++;
       xp++; 
      }
      else
      {
        deb(x) deb(' ')
        cout<<"NO\n";
        return;
      }
    }
    else
    {
      if(yp==y and xp==x-1)
      {
        if(y==0) { yp=0; xp=x; y=1; }
        else { yp=1; xp=x; y=0; }
      }
      else
      {
        xp=x;
        yp=y;
        x++;
      }
    }
    if(x==n+1 and y==0) { cout<<"YES\n"; return; }
    else if(x>n or y>1 or y<0) { deb(x) cout<<"NO\n"; return;}
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