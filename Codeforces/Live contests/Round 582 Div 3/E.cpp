//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define mod %1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
string x,y;
bool check(string s)
{
  for (int i = 0; i < s.length()-1; ++i)
  {
    string a;
    a+=s[i];
    a+=s[i+1];
    if(a==x || a==y) return false;
  }
  cout<<"YES\n"<<s;
  return true;
}
void solve()
{ 
  std::vector<char> v;
  v.pb('a');v.pb('b');v.pb('c');
  int n;
  cin>>n>>x>>y;
  do
  {
    string s;
    for (int i = 0; i < 3*n; ++i)
    {
      s+=v[i%3];
    }
    if(check(s)) return;
    s="";
    for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
        s+=v[i];
      }
    }
    if(check(s)) return;
  }
  while(next_permutation(all(v)));
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
  int t=1;
  //cin>>t;
	while(t--)
	{
		solve();
	}
}