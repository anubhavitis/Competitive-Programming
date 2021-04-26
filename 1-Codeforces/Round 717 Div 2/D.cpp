//Mark XXXV
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
#define vll				vector<ll>
#define vvi             vector<vi>
#define pi              pair<int,int>
#define vpi             vector<pi>
#define F               first
#define S               second

#define endl            "\n"
#define PI              3.14159265
// #define M               100000000
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
vi SOE(int n)
{
    vector<bool> prime(n+1, true);
    for (int p = 2; p * p <= n; p++)
    	if (prime[p] == true)
    		for (int i = p * p; i <= n; i += p)
                prime[i] = false;
 
    vi res;
    for (int p = 2; p <= n; p++)
        if (prime[p])
            res.pb(p);
    return res;
}

vi pp;

void solve() {
	int n, q;
	cin>>n>>q;

	vi v(n);
	for(auto &it: v) cin>>it;

	vi pref(n,1);
	for(int i=0, j=0, g=-1; j<n; ++j){
		if(g==-1){
			g=v[j];
			continue;
		}

		while(__gcd(g, v[j])>1 and i<j){
			++i
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
	// cin >> t;
	pp=SOE(100000);
	for (int i = 0; i < t; ++i)
		solve();
}

