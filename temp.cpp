
/**************************Pair Hashing fast *********************************/
struct HASH {
	size_t operator()(const pair<int, int>&x)const {
		return (size_t) x.first * 37U + (size_t) x.second;
	}
};

/************************* DSU implimentation ********************************/
vi dad;
int find(int n) {
	if (dad[n] == 0 or dad[n] == n) return dad[n] = n;
	return dad[n] = find(dad[n]);
}

/********************************** Power ***************************************/
ll power( ll a, ll b, ll c) {
	if (!b) return 1;

	ll res = 1;
	a %= c;
	while (b) {
		if (b & 1) res = (res * a) % c;
		b >>= 1;
		a = (a * a) % c;
	}
	return res;
}

/********************************** nCr ***************************************/
vi fact, inv;
void preprocess(int n) {
	fact.resize(n + 1);
	inv.resize(n + 1);

	fact[0] = inv[0] = 1;
	for (int i = 1; i <= n; ++i) {
		fact[i] = (fact[i - 1] * i) % M;
		inv[i] = power(fact[i], M - 1, M);
	}
}

/********************************** Seive ***************************************/
vi SOE(int n)
{
	vector<bool> prime(n + 1, true);
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

/********************************** SEGMENT TREE *********************************/
struct segTree {
	int sz;
	vll sums;

	void init(int n) {
		sz = 1;
		while (sz < n) sz *= 2;
		sums.assign(2 * sz, 0);
	}

	void combine(int x) {
		sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
	}

	void build(vi &a, int x, int lx, int rx ) {
		if (rx - lx == 1) {
			if (lx < a.size()) {
				sums[x] = a[lx];
				return;
			}
			return;
		}

		int m = (lx + rx) >> 1;
		build(a, 2 * x + 1, lx, m);
		build(a, 2 * x + 2, m, rx);

	}

	void build(vi &a) {
		build(a, 0, 0, sz);
	}

	void set(vi &a, int i, int v, int x, int lx, int rx) {
		if (rx - lx == 1) {
			a[i] = sums[x] = v;
			return;
		}

		int m = (lx + rx) >> 1;
		if (i < m) set(a, i, v, 2 * x + 1, lx, m);
		else set(a, i, v, 2 * x + 2, m, rx);

		combine(x);
	}
	void set(vi &a, int i, int v) {
		set(a, i, v, 0, 0, sz);
	}


	ll sum(int t, int l, int r, int tl, int tr) {
		if (r <= tl or l >= tr) return 0;
		if (tl >= l and tr <= r) return sums[t];

		int m = (tl + tr) >> 1;
		ll s1 = sum(2 * t + 1, l, r, tl, m);
		ll s2 = sum(2 * t + 2, l, r, m, tr);
		return  s1 + s2;
	}

	ll sum(int x, int y) {
		return sum(0, x, y, 0, sz);
	}
};