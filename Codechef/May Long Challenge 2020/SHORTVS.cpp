//Mark XXVI
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
#define rrep(i,b,c) for(i=b; i>=c; --i)

#define M 998244353
#define LINF 1e18
#define INF INT_MAX
int i,j,n,m;
using namespace std;

void putall(vector<int> v,int grid[][19])
{
  int y,z;
  rep(y,0,v.size()-1)
   rep(z,y+1,v.size())
    grid[v[y]][v[z]]=grid[v[z]][v[y]]=1;
}


void findall(int grid[][19])
{
  bool row[19]={};
  queue<int> q;
  rep(i,1,n+1)
  {
    if(row[i]) continue;
    vector<int> v;
    q.push(i);
    while(q.size())
    {
      int x=q.front();
      if(row[x]) { q.pop(); continue; }
      v.pb(x);
      row[x]=true;
      rep(j,1,n+1) if(grid[x][j] and !row[j]) q.push(j);
      q.pop();
    }
    putall(v,grid);
  }
}

int cntval(int arr[],int grid[][19],int ind[])
{
  int cnt=INF;
  rep(i,1,n+1)
  {
    if(arr[i]==i) continue;
    int arr2[n+1],ind2[n+1];
    rep(i,0,n+1) arr2[i]=arr[i];
    rep(i,0,n+1) ind2[i]=ind[i];
    
    int x=ind2[i];
    swap(arr2[i],arr2[x]);
    ind2[arr2[i]]=i;
    ind2[arr2[x]]=x;

    cnt=min(cnt,(1-grid[i][x])+cntval(arr2,grid,ind2));
  }
  if(cnt==INF) return 0;
  return cnt;

}

void solve()
{
  cin>>n>>m;
  int grid[19][19]={};
  int arr[n+1],ind[n+1];
  rep(i,1,n+1) cin>>arr[i],ind[arr[i]]=i;
  int x,y;
  rep(i,0,m) 
  {
    cin>>x>>y;
    grid[x][y]=1;
    grid[y][x]=1;
  }
  findall(grid);
  // rep(i,1,n+1) { rep(j,1,n+1) cerr<<grid[i][j]<<" "; cerr<<endl; }

  // rep(i,1,n+1)
  //   rep(j,1,i)
  //   {
  //     if(grid[i][j]!=1) continue;
  //     if(arr[i]!=i and arr[j]!=j)
  //     {
  //       swap(arr[i],arr[j]);
  //       ind[arr[i]]=i;
  //       ind[arr[j]]=j;
  //     }
  //   }
  int cnt=cntval(arr,grid,ind);
  // int cnt=0;
  // rep(i,1,n+1)
  // {
  //   if(arr[i]==i) continue;
  //   int x=ind[i];
  //   if(grid[x][i]==0) cnt++;
  //   swap(arr[x],arr[i]);
  //   ind[arr[x]]=x;
  //   ind[arr[i]]=i;
  // }

  cout<<cnt<<endl;
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