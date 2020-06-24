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
  map<int,int> m;
  for(int i=0;i<n;++i)
  {
    cin>>a[i];
    if(a[i]<0 and m[abs(a[i])]<=0) { cout<<"-1"; return;} 
    if(a[i]>0 and m[abs(a[i])]>0) { cout<<"-1"; return;} 

    if(a[i]>0) m[a[i]]++;
    else m[abs(a[i])]--;
  }

  for(auto i:m) if(i.second!=0) { cout<<"-1"; return;} 
  int cnt=0,px=0;
  std::vector<int> v;
  map<int,int> mym;
  for (int i = 0; i < n; ++i)
  {
    if(a[i]>0 and mym[a[i]]>0) { cout<<"-1"; return;}

    if(a[i]>0) cnt++,mym[a[i]]++;
    else cnt--;
    px++;
    if(cnt==0) { v.pb(px); px=0; mym.clear();}
  }
  cout<<v.size()<<"\n";
  for(auto i:v)
    cout<<i<<" ";
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