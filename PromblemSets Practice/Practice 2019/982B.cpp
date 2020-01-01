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
  int n;
  cin>>n;
  int a[n];
  std::map<int, int> m;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    m[a[i]]=i+1;
  }
  stack<int> si,se;
  sort(a,a+n);
  for(int i=n-1;i>=0;--i) si.push(a[i]);

  string s;
  cin>>s;
  for(auto i:s)
  {
    if(i=='0')
    {
      cout<<m[si.top()]<<" ";
      se.push(si.top());
      si.pop();
    }
    else
    {
      cout<<m[se.top()]<<" ";
      se.pop();
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