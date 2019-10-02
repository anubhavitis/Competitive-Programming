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
  int n;
  cin>>n;
  int a[n],b[n];
  for (int i = 0; i < n; ++i)
  {
      cin>>a[i]>>b[i];
  }

  unsigned ll sum=0;
  for (int i = 1; i < n-1; ++i)
  {
    if(a[i-1]==a[i] and a[i+1]<a[i])
    {
      if(b[i-1]<b[i])
      {
        a[i-1]++;
        sum+=b[i-1];
      }
      else
      {
        a[i]++;
        sum+=b[i];
      }
      continue;
    }
    if(a[i-1]<a[i] and a[i+1]==a[i])
    {
      if(b[i+1]<b[i])
      {
        a[i+1]++;
        sum+=b[i+1];
      }
      else
      {
        a[i]++;
        sum+=b[i];
      }
      continue;
    }
    if(a[i-1]>a[i] and a[i+1]==a[i])
    {
      if(2*b[i]<b[i+1])
      {
        a[i]+=2;
        sum+=2*b[i];
      }
      else
      {
        a[i+1]++;
        sum+=b[i+1];
      }
      continue;
    }
    if(a[i-1]==a[i] and a[i+1]>a[i])
    {
      if(b[i-1]<b[i])
      {
        a[i-1]++;
        sum+=b[i-1];
      }
      else
      {
        a[i]++;
       q sum+=b[i];
      }
      continue;
    }
    if(a[i-1]==a[i] and a[i+1]==a[i])
    {
      sum+=b[i];
      continue;
    }
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
    solve();
  }
}