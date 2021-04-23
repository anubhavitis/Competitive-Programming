//Mark XXXIV
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

bool findPartiion(vi &arr, int n)
{
    int sum = 0;
    int i, j;

    for (i = 0; i < n; i++) sum += arr[i];
 
    if (sum % 2 != 0) return false;
 
    bool part[sum / 2 + 1];

    for (i = 0; i <= sum / 2; i++) part[i] = 0;

    for (i = 0; i < n; i++)
        for (j = sum / 2; j >= arr[i]; j--)
            if (part[j - arr[i]] == 1 || j == arr[i])
                part[j] = 1;
 
    return part[sum / 2];
}

void solve() {
	int n; cin >> n;
	vi v(n);
	int x = 0;
	for (auto &it : v) {
		cin >> it;
		x +=it;
	}

	if (x&1 or findPartiion(v, n)==false) { cout << "0\n"; return; }


	for(int i=0; i<n; ++i){
		vector<int> temp;
		for(int j=0; j<n; ++j)
			if(i!=j) temp.pb(v[j]);

		if(findPartiion(temp, n-1)==false) {
			cout<<"1\n"<<i+1<<endl;
			return;
		}
	}

	cout<<"0\n";
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

	for (int i = 0; i < t; ++i)
		solve();
}

