//Mark XXI
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
#define rep(a,b,c) for(int i=a; i<b; i+=c)
using namespace std;

ll count(vector<int> v,int n,int l)
{
    ll cnt=1;
    if(n<2) return 1;

    rep(0,n-1,1)
    {
        if(v[i]+v[i+1]<=l)
        {
            vector<int> vn=v;
            vn[i]+=vn[i+1];
            vn.erase(vn.begin()+(i+1));
            cnt+=count(vn,n-1,l) %M;
        }
    }
    return cnt;
}

void solve()
{
    int n,l;
    cin>>n>>l;
    if(n%2 or l%2) { cout<<"0\n"; return;}
    vector<int> v;
    rep(0,n/2,1) v.pb(2);
    cout<<count(v,n/2,l)<<endl;
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
