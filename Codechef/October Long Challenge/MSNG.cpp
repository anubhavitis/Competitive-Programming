//Mark XVI
#include<bits/stdc++.h>

#define ll long long int
#define M 1000000007
#define MAX 1000000000000
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
int getdigit(char c)
{ 
    if (c >= '0' && c <= '9') 
        return (int)c - '0'; 
    else
        return (int)c - 'A' + 10; 
}

ll Deci(string str, int len,int base) 
{ 
    ll power = 1; 
    ll num = 0;
    ll i; 
    for (i = len - 1; i >= 0; i--) 
    { 
        if (getdigit(str[i]) >= base) 
           return -1; 
        if(num > MAX || power > MAX)
        return -1;
        num += getdigit(str[i]) * power; 
        power = power * base; 
    } 
    if(num>MAX)
    return -1;
    return num; 
} 

void solve()
{
  int n,l;
  cin>>n;
  
  string s;
  int b;
  map<ll,int> mmap;
  for(int i=0;i<n;++i)
  {
    cin>>b>>s;
    
    int l=s.length();
    set<ll> mset;
    ll temp;
    if(b==-1)
      for(b=2;b<37;++b) 
      {
        temp=Deci(s,l,b);
        if(temp==-1) continue;
        mset.insert(temp);
      }
    else
    {
      temp=Deci(s,l,b);
      if(temp!=-1) mset.insert(temp);
    } 
    for(auto j:mset)
    {
      if(i==0) mmap[j]=1;
      else mmap[j]++;
    }
  }

  for(auto i:mmap)
  {
    if(i.second==n)
    {
      cout<<i.first<<"\n";
      return;
    }
  }
  cout<<"-1\n";
  return;

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
    deb('-')
    solve();
  }
}