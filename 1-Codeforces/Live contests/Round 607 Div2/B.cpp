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
  string s1,s2;
  cin>>s1>>s2;
  
  for (int i = 0; i < s1.size(); ++i)
  {
    int np=i;
    for(int j=s1.size()-1;j!=i;--j)
      if(s1[j]<s1[np]) np=j;
      
    if(np!=i)                             
      { 
        swap(s1[np],s1[i]);
        break;
      }
  }
  if(s1<s2) cout<<s1;
  else cout<<"---";

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