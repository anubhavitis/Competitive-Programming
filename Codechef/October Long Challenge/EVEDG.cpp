//Mark XIV
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
  int n,m;
  cin>>n>>m;
  int A[n+1]={},B[n+1]={};
  int a[n+1]={},b[n+1]={};
  int x,y;
  for (int i = 0; i < m; ++i)
  {
    cin>>x>>y;
    if(x<y)
      { b[x]++; a[y]++; B[x]=y; A[y]=x; }
    else
      { a[x]++; b[y]++; A[x]=y; B[y]=x; }
  }

  if(m%2==0)
  {
    cout<<"1\n";
    for (int i = 0; i < n; ++i) cout<<"1 ";
    cout<<"\n";
    return;
  }

  int mi=INT_MAX,mo=INT_MAX,ki=-1,ko=-1;
  for (int i = 1 ; i < n+1; ++i)
  {
    if(b[i]%2 and b[i]<mi)
    {
      mi=b[i];
      ki=i;
    }
    if( (a[i]+b[i])%2 and a[i]+b[i]<mo )
    {
      mo=a[i]+b[i];
      ko=i;
    }
  }

  if(ko!=-1)
  {
    a[ko]=b[ko]=0;
    cout<<"2\n";
    for (int i = 1; i < n+1; ++i)
    {
      if(a[i]==0 and b[i]==0)
        cout<<"2 ";
      else cout<<"1 ";
    }
    cout<<endl;
    return;
  }

  int key=A[ki];

  a[ki]=b[ki]=0;
  a[key]=b[key]=-1;
  cout<<"3\n";
  for (int i = 1; i < n+1; ++i)
  {
    if(a[i]==0 and b[i]==0) cout<<"2 ";
    else if(a[i]==-1) cout<<"1 ";
    else cout<<"3 ";
  }
  cout<<endl;
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
    solve();
  }
} 