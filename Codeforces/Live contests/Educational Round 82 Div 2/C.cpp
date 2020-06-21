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
  string s;
  cin>>s;

  int a[26]={};
  string ans;
  int ind=-1;
  for(auto i:s)
  {
    if(ind==-1) 
    {
      ans=i;
      ind=0;
      a[i-'a']=1;
    }
    else if(a[i-'a']==1)
    {
      int f=1;

      if(ind<ans.size()-1)
        if(ans[ind+1]==i)
          ind++,f=0;
      if(ind>0)
        if(ans[ind-1]==i)
          ind--,f=0;

      if(f)
      {
        cout<<"NO"<<endl;
        return;
      }
    }
    else
    {
      if(ind==ans.size()-1) ans+=i,ind++,a[i-'a']=1;
      else if(ind==0) ans=i+ans,a[i-'a']=1;
      else
      {
        cout<<"NO"<<endl;
        return;
      }

    }
  }
  cout<<"YES"<<endl;
  for(int i=0;i<26;++i)
    if(a[i]==0) ans+=char('a'+i);
  cout<<ans<<endl;
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
    solve();
}