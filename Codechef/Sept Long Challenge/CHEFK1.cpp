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

  ll m,n;
  cin>>n>>m;
  deb(m)
  if( m<n-1 or m > (n*(n+1))/2 )
  {
    cout<<"-1\n";
    return;
  }
  if(n==1)
  {
    if(!m) cout<<"1\n";
    else cout<<"-1\n";
    return;
  } 
  if(n==2)
  {
    if(m==1) cout<<"1\n";
    else cout<<"2\n";
    return ;
  }
  ll key=m/n;
  if(key>=2)
  {
    if(n*key==m) cout<<(2*key -1)<<"\n";
    else if(m>n*key and m<=( n*key + n/2)) cout<<2*key<<"\n";
    else if(m>(n*key+n/2) and m<(n*(key+1))) cout<<2*(key+1)-1<<"\n";
    return;
  }
  if(m>=n-1 and m<=n+1) cout<<"2\n";
  else if(m>n+1 and m<=2*n) cout<<"3\n";
  return;
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