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

using namespace std;

void solve()
{
  ll n,a,b,k;
  cin>>n>>a>>b>>k;
  int h[n],p[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>h[i];
    h[i]%=(a+b);
    if(h[i]==0) h[i]+=(a+b);

    if(h[i]<=a) p[i]=0;
    else if(h[i]%a==0) p[i]=h[i]/a-1;
    else p[i]=h[i]/a; 
  }
  sort(p,p+n);
  ll sum=0,psum=0;
  for(auto i:p)
  { 
    psum+=i;
    if(psum<=k) sum++;
    else break;
  }
  cout<<sum<<endl;

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
  solve();
}