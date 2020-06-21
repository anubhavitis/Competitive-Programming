//Mark XVII
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
  int a,b;
  cin>>a>>b;
  if(a>b)
  {
    int c=b;
    b=a;
    a=c;
  }

  if(b==2*a) { cout<<"YES"; return; }

  int p=(2*b-a)/3;
  b-=2*p;
  a-=p;
  if(a>b and a==2*b) { cout<<"YES"; return; }
  if(a<b and b==2*a) { cout<<"YES"; return; }

  else cout<<"NO";
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
    cout<<"\n";
    deb('\n')
  }
}