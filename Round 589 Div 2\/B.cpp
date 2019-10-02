//Mark XIV
#include<bits/stdc++.h>

#define ll long long int
#define C 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
int power(int A, int B) 
{ 
    // Base cases 
    if (A == 0) 
        return 0; 
    if (B == 0) 
        return 1; 
  
    // If B is even 
    long y; 
    if (B % 2 == 0) { 
        y = power(A, B / 2); 
        y = (y * y) % C; 
    } 
  
    // If B is odd 
    else { 
        y = A % C; 
        y = (y * power(A, B - 1) % C) % C; 
    } 
  
    return (int)((y + C) % C); 
} 
void solve()
{
  int m,n;
  cin>>m>>n;
  int a[m][n]={};
  int temp;
  for (int i = 0; i < m; ++i)
  {
    cin>>temp;
    for(int j=0;j<min(temp,n);++j)
    {
      if(a[i][j]==-1) { cout<<"0"; return;}
      a[i][j]=1;      
    }
    if(temp<n) a[i][temp]=-1;
  }

  for (int i = 0; i < n; ++i)
  {
    cin>>temp;
    temp;
    for(int j=0;j<min(temp,m);++j)
    {
      if(a[j][i]==-1) { cout<<"0"; return;}
      a[j][i]=1;      
    }
    if(temp<n) a[temp][i]=-1;
  }

  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cerr<<a[i][j]<<" ";
    }
    cerr<<"\n";
  }

  int cnt=0;
  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j) if(a[i][j]==0) cnt++;
  cout<<power(2,cnt);
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
    solve();
  }
}