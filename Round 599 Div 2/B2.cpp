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

void swap(string &s,string &t,int x,int y)
{
  char c=s[x];
  s[x]=t[y];
  t[y]=c;
}

void solve()
{
  int n;
  string s,t;
  cin>>s>>t;
  int a[26]={};
  for (int i = 0; i < n; ++i)
  {
    a[s[i]-'a']++;
    a[t[i]-'a']--;
  }
  for (int i = 0; i < n; ++i)
    if(a[i])
    {
      cout<<"No";
      return;
    }
  int fl[n];
  for (int i = 0; i < n; ++i)
  {
    if(s[i]==t[i]) fl[i]=0;
    else fl[i]=1;
  }

  std::vector<int,int> v;
  int c=0;
  while(c<=2*n)
  {
    std::vector<int, int> vi;
    for (int i = 0; i < n; ++i)
    {
      if(s[i]!=t[i]) vi.pb(i);
      if(vi.size()==2) break;
    }
    swap(s,t,v[0],v[1]);
    c++;
    if(c==2n+1) { cout<<"No"; return; }

    
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
  cin>>t;
  while(t--)
  {
    deb('\n')
    solve();
    cout<<"\n";
  }
}