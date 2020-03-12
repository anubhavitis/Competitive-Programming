//Mark XX
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
  int n;
  string s;
  cin>>n>>s;

  int ind[26]={},cnt[26]={};
  for(int i=0;i<n;++i)
  {
    ind[s[i]-'a']=i;
    cnt[s[i]-'a']++;
  }
  int a[n];
  
  for(int i=0;i<n;++i) a[i]=-1;

  for(int i=0;i<n;++i)
  {
    if(cnt[s[i]-'a']==0) continue;
    for(int j=ind[s[i]-'a'];cnt[s[i]-'a'];--j)
    {
      if(a[j]!=-1) { cout<<"NO"; return; }
      if(s[j]-'a'==i) a[j]= 1, cnt[s[j]-'a']--;
      else a[j] =0;
    }
    for(auto i:a) cerr<<i<<" ";
    cerr<<"\n";

  }
  cout<<"YES"<<endl;
  for(auto i:a) cout<<i; 


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