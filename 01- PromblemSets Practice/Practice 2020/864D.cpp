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
  int n;
  cin>>n;
  int a[n+1]={},arr[n];
  for(int i=0;i<n;++i)
  {
    cin>>arr[i];
    a[arr[i]]++;
  }
  stack<int> s;
  int key=-1;
  for(int i=n;i>0;--i) 
    if(!a[i])  s.push(i);
  map<int,int> m;
  int cnt=s.size();
  for(int i=0;i<n;++i)
  {
    if(a[arr[i]]>1)
    {
      if(s.top()>arr[i] and m[arr[i]]!=1)
        m[arr[i]]=1;
      else
        a[arr[i]]--,arr[i]=s.top(),s.pop();
    }
  }
  cout<<cnt<<"\n";
  for(auto i:arr) cout<<i<<" ";
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