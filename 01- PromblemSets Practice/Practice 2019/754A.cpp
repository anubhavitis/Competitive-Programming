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

  int a[n],sum=0,ind=-1;
  for (int i = 0; i < n; ++i)  
  {
    cin>>a[i];
    sum+=a[i];
    if(ind==-1 and a[i])  ind = i;
  }
  if(sum) { cout<<"YES\n1\n1 "<<n; return; }
  if(ind!=-1) { cout<<"YES\n2\n1 "<<ind+1<<"\n"<<ind+2<<" "<<n; return; }
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
  //cin>>t;
  while(t--)
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}