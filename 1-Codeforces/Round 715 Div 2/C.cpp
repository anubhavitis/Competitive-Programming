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

set<ll> st;
map<ll, ll> mpi;

ll cal(vector<ll> &v) {
	ll sum = 0, mm = LLONG_MAX, mx = LLONG_MIN;

	for (auto it : v) {
		mm = min(mm, it);
		mx = max(mx, it);

		sum += mx - mm;
	}

	return sum;
}

ll check(ll ind) {
	vector<ll> tmpi , tmp;

	set<ll>::iterator it = st.begin();
	for (ll i = 0; i < ind; ++i) ++it;
	set<ll>::iterator jt = it;
	jt++;

	while (ind >= 0 and jt != st.end()) {
		for (ll i = 0; i < mpi[*it]; ++i) tmpi.pb(*it);
		ind--;
		it--;
		for (ll i = 0; i < mpi[*jt]; ++i) tmpi.pb(*jt);
		++jt;
	}

	while (ind >= 0) {
		for (ll i = 0; i < mpi[*it]; ++i) tmpi.pb(*it);
		ind--;
		it--;
	}

	while (jt != st.end()) {
		for (ll i = 0; i < mpi[*jt]; ++i) tmpi.pb(*jt);
		++jt;
	}

	return cal(tmpi);
}

ll check2(ll ind) {
	vector<ll> tmpi , tmp;

	set<ll>::iterator it = st.begin();
	for (ll i = 0; i < ind; ++i) ++it;
	set<ll>::iterator jt = it;
	jt++;

	while (ind >= 0 and jt != st.end()) {
		for (ll i = 0; i < mpi[*jt]; ++i) tmpi.pb(*jt);
		++jt;
		for (ll i = 0; i < mpi[*it]; ++i) tmpi.pb(*it);
		ind--;
		it--;
	}

	while (ind >= 0) {
		for (ll i = 0; i < mpi[*it]; ++i) tmpi.pb(*it);
		ind--;
		it--;
	}

	while (jt != st.end()) {
		for (ll i = 0; i < mpi[*jt]; ++i) tmpi.pb(*jt);
		++jt;
	}

	return cal(tmpi);
}

void solve() {
	ll n; cin >> n;

	for (ll i = 0; i < n; ++i) {
		ll t; cin >> t;
		mpi[t]++;
		st.insert(t);
	}


	ll sum = LLONG_MAX;
	ll m = st.size();
	for (ll i = 0; i < m; ++i) {
		sum = min(sum, check(i));
		sum = min(sum, check2(i));
	}

	cout << sum << endl;
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

