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
  int n,k,temp;
  cin>>n>>k;
  std::map<int, int> m;
  std::vector<int> v;
  int cnt=0,ind=0;
  while(n--)
  {
    cin>>temp;
    if(m[temp]!=1)
    {
      if(cnt<k)
      {
        v.pb(temp);
        m[temp]=1;
        cnt++;
      }
      else
      {
        m[v[ind]]=-1;
        ind++;
        v.pb(temp);
        m[temp]=1;
      }
    }
  }
  cout<<cnt;
  cout<<endl;
  fflush(stdout);
  for(int i=v.size()-1;i>=ind;--i)
    cout<<v[i]<<" ";

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