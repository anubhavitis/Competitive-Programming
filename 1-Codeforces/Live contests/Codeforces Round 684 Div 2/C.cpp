//Mark XXXII
#include<bits/stdc++.h>

#define ll             long long
#define mp              make_pair
#define pb              push_back
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vvi             vector<vi>
#define pi              pair<int,int>

#define PI              3.14159265
#define M               1000000007
#define LINF            LONG_MAX
#define NL              LONG_MIN
#define INF             INT_MAX
#define NI              INT_MIN

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

using namespace std;

//Code begins from here!!

#define mxn 1000
int n, m;

void solve() {
    cin >> n >> m;
    int arr[n][m], cnt = 0;
    for (int i = 0; i < n; ++i){
        string s;
        cin>>s;
        for(int j=0; j<m; ++j){
            arr[i][j]=(s[j]-'0');
            if(arr[i][j]) cnt++;
        }
    }

    cout << cnt * 3 << endl;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (arr[i][j]) {
                if(i<n-1 and j<m-1){
                    cout<<i+1<<" "<<j+1<<" "<<i+2<<" "<<j+2<<" "<<i+1<<" "<<j+2<<endl;
                    cout<<i+1<<" "<<j+1<<" "<<i+2<<" "<<j+1<<" "<<i+2<<" "<<j+2<<endl;
                    cout<<i+1<<" "<<j+1<<" "<<i+2<<" "<<j+1<<" "<<i+1<<" "<<j+2<<endl;
                }
                else if(i<n-1) {
                    cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j<<" "<<i+2<<" "<<j<<endl;
                    cout<<i+1<<" "<<j+1<<" "<<i+2<<" "<<j+1<<" "<<i+2<<" "<<j<<endl;
                    cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j<<" "<<i+2<<" "<<j+1<<endl;   
                }
                else if(j<m-1){
                    cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+2<<" "<<i<<" "<<j+2<<endl;
                    cout<<i+1<<" "<<j+1<<" "<<i<<" "<<j+1<<" "<<i<<" "<<j+2<<endl;
                    cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+2<<" "<<i<<" "<<j+1<<endl;      
                }
                else{
                    cout<<i+1<<" "<<j+1<<" "<<i<<" "<<j+1<<" "<<i<<" "<<j<<endl;
                    cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j<<" "<<i<<" "<<j<<endl;
                    cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j<<" "<<i<<" "<<j+1<<endl;   
                }
            }
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
    freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
    freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
    IOS()
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();
}
