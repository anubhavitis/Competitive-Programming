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

int temp;

using namespace std;

void solve()
{
  int a,b,c,m;
  string s;
  cin>>a>>b>>c>>m;
  std::vector<int> u,p;
  for (int i = 0; i < m; ++i)
  {
    cin>>temp>>s;
    if(s[0]=='U') u.pb(temp);
    else p.pb(temp);
  }
  
  ll price=0,ans=0;
  sort(all(u));
  sort(all(p));
  int n_u=u.size(),n_p=p.size();
  price=accumulate(u.begin(),u.begin()+min(n_u,a),price);
  ans+=min(n_u,a);
  price=accumulate(p.begin(),p.begin()+min(n_p,b),price);
  ans+=min(n_p,b);

  int u1=a,p1=b;

  while(c-- and (u1<n_u or p1<n_p))
  {
    if(u1<n_u and p1<n_p)
    {
      if(u[u1]<p[p1]) ans++,price+=u[u1],u1++;
      else ans++,price+=p[p1],p1++;
    }
    else if(u1<n_u)
    {
      ans++;
      price+=u[u1];
      u1++;
    }
    else
    {
      ans++;
      price+=p[p1];
      p1++;
    }
  }
  cout<<ans<<" "<<price;

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
