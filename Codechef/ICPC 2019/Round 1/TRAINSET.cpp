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
  int n;
  cin>>n;
  string s;
  int key;
  map<string,bool> c;
  map<string,int> m;
  int a[n]={},b[n]={},pos=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>s>>key;
    if(c[s]==false)
    {
      c[s]=true;
      m[s]=pos++;
    }
    if(key==0) a[m[s]]++;
    else b[m[s]]++;

  }
  ll sum=0;
  for(auto i:c)
  {
    string str=i.first;
    int ind=m[str];
    sum+=max(a[ind],b[ind]);
  }
  cout<<sum<<"\n";

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