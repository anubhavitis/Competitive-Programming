//Mark XVI
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
  int k,n;
  cin>>n>>k;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  int   sum=0;
  std::vector<int> v;
  int s=0;
  for (int i = 0; i < n; ++i)
  {
    s++;
    sum+=a[i];
    if(sum>0) 
      {
        v.pb(s);
        s=sum=0;
      }
  }
  if(v.size()>=k)
  {
    cout<<"YES\n";
    for(int i=0;i<k-1;++i)
      cout<<v[i]<<" ";
    for(int i=k;i<v.size();++i)
      v[k-1]+=v[i];
    cout<<v[k-1]<<"\n";
    return;
  }
  cout<<"NO\n";
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
    deb('\n')
    solve();
  }
}