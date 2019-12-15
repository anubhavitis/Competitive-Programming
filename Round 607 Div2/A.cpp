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
  string s;
  cin>>s;
  int l=s.size();
  if(s[l-2]=='p' and s[l-1]=='o') { cout<<"FILIPINO"; return;}
  if(s[l-2]=='s' and s[l-1]=='u') 
  {  
    if(s[l-4]=='d' and s[l-3]=='e')
    { 
      cout<<"JAPANESE"; return;
    }
    else if(s[l-4]=='m' and s[l-3]=='a')
    { 
      cout<<"JAPANESE"; return;
    }
  }
  cout<<"KOREAN";
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
    cout<<"\n";
    deb('\n')
  }
}