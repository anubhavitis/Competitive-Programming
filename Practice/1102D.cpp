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
  string s;
  cin>>n>>s;
  int a[3]={};
  for (int i = 0; i < n; ++i) a[s[i]-'0']++;
  int cnt0=0,cnt1=0,cnt2=0;
  for (int i = 0; i < n; ++i)
  {
    if(s[i]=='0')
    {
      if(cnt0<n/3) { cnt0++; continue; }
      if(a[1]<n/3) { s[i]='1'; cnt1++; a[1]++; a[0]--; continue; }
      else if(a[2]<n/3) { s[i]='2'; cnt2++; a[2]++; a[0]--; continue; }
    }
    else if(s[i]=='1')
    {
      if(a[1]>n/3)
      {
        if(a[0]<n/3) { s[i]='0'; cnt0++; a[0]++; a[1]--; continue; }
        if(cnt1<n/3) { cnt1++; continue; } 
        s[i]='2';
        a[2]++;
        a[1]--;
        cnt2++;
      }
    }
    else
    {
      if(a[2]>n/3)
      {
        if(a[0]<n/3) { s[i]='0'; cnt0++; a[0]++; a[2]--; continue; }
        if(a[1]<n/3) { s[i]='1'; cnt1++; a[1]++; a[2]--; continue; }
      }
    }

  }
  cout<<s;

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
    deb('\n')
    solve();
    cout<<"\n";
  }
}