//Mark XXXIII
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

#define endl			"\n"
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

struct HASH {
	size_t operator()(const pair<int, int>&x)const {
		return (size_t) x.first * 37U + (size_t) x.second;
	}
};

//Code begins from here!!
ll n, m;

ll binary_lower(ll value, ll arr[], ll n)
{
	ll start = 0;
	ll end = n - 1;
	ll ans = -1;
	ll mid;

	while (start <= end) {
		mid = (start + end) / 2;
		if (arr[mid] >= value) {
			end = mid - 1;
			ans = mid;
		}
		else start = mid + 1;
	}
	return ans;
}

ll countTriplet(ll arr[], ll n, ll k)
{
	ll count = 0;
	sort(arr, arr + n);
	for (ll i = 2; i < n; i++) {
		ll cur = binary_lower(arr[i] - k, arr, n);
		if (cur <= i - 2) count += ((i - cur) * (i - cur - 1)) / 2;
	}

	return count;
}
void solve() {
	cin >> n;

	ll arr[n];
	for (ll i = 0; i < n; ++i) cin >> arr[i];
	cout << countTriplet(arr, n, 2) << endl;

}

signed main() {

#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	IOS()
	ll t = 1;
	cin >> t;

	for (int i = 0; i < t; ++i)
		solve();
}
