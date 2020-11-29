//Mark XXXII
#include<bits/stdc++.h>

#define ll              long long
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
#define M               998244353
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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i+2<n; ++i){
        vector<int> ret(6);
        int j=0;
        cout<<"OR "<<i+1<<" "<<i+2<<endl;
        cout.flush();
        cin>>ret[j++];
        cout<<"AND "<<i+1<<" "<<i+2<<endl;
        cout.flush();
        cin>>ret[j++];

        cout<<"OR "<<i+3<<" "<<i+2<<endl;
        cout.flush();
        cin>>ret[j++];
        cout<<"AND "<<i+3<<" "<<i+2<<endl;
        cout.flush();
        cin>>ret[j++];

        cout<<"OR "<<i+1<<" "<<i+2<<endl;
        cout.flush();
        cin>>ret[j++];
        cout<<"AND "<<i+3<<" "<<i+2<<endl;
        cout.flush();
        cin>>ret[j++];

        vector<int> cals(6);
        for(int j=0; j<6; j+=2){
            for(int k=0; (1<<k)<=ret[j] and (1<<k)<=ret[j+1]; ++k){
                int val= 1<<k;
                if()
            }
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
