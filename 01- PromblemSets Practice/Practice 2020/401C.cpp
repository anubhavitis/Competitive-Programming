//Mark XXV
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i,b,c) for(i=b; i<c; ++i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
// int i,j;
int arr[] = {1, 0};
using namespace std;

void solve(){
  int n, m;
  cin>>m>>n;
  string s = "";
  while(n>m && n!=0 && m!=0){
    s+="110";
    n-=2;
    m--;
  }
 
  char last = s[s.size()-1];
  while(n!=0 && m!=0){
    s+= "10";
    n--;
    m--;
  }
 
 
  if(m>0){
    s= '0' + s;
    m--;
  }
  if(n>2||m>1 || (n == 0 && m!=0)){
    cout<<-1<<endl;
    return;
  }
  if(n>0)
  s+= string(n, '1');
  if(m>0)
  s += string(m, '0');
  cout<<s<<endl;
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
    solve();
} 