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
  
  for(int i=0; i<min(s1.size(),s2.size()); ++i)
  {
    if(s1[i]<s2[i]) { cout<<s1; return; }
    int same=-1,small=-1;

    for(int j=s1.size()-1; j>i;--j)
      if(s1[j]<s2[i]) small=j;
      else if(s1[j]==s2[i]) same=j;
    if(s1[i]==s2[i] and small==-1) continue;
    if(s1[i]==s2[i] and small!=-1)
    {
      swap(s1[i],s1[small]);
      cout<<s1;
      return;
    }
    if(small!=-1)
    {
      swap(s1[i],s1[small]);
      cout<<s1;
      return;
    }
    if(small==-1 and same!=-1)
    {
      swap(s1[i],s1[same]);
      if(s1.size()>s2.size()) { cout<<"---"; return; }
      for(int x=i+1;x<s1.size(); ++x)
        if(s1[x]<s2[x]) { cout<<s1; return; }
        else if(s1[x]>s2[x]) { cout<<"---"; return;}
      cout<<"---"; return;
    }

  }
  if(s1.size()<s2.size()) { cout<<s1; return; }
  cout<<"---";

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