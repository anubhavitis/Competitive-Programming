
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
	ll noOp = -1;
	vll vals, ops;

	void init(int n) {
		sz = 1;
		while (sz < n) sz *= 2;
		ops.assign(2 * sz, 0);
		vals.assign(2 * sz, 0);
	}

	void lazyP(int x, int lx, int rx) {
		if (rx - lx > 1 and ops[x] != noOp) {
			int lc = 2 * x + 1, rc = lc + 1;
			ops[lc] = ops[x];
			ops[rc] = ops[x];
		}
		if (ops[x] != noOp) vals[x] = (rx - lx) * ops[x];
		ops[x] = -1;
	}

	void update(int l, int r, ll v, int x, int lx, int rx) {
		lazyP(x, lx, rx);
		if (l >= rx or lx >= r) return;
		if (lx >= l and rx <= r) {
			ops[x] = v;
			lazyP(x, lx, rx);
			return;
		}

		int m = (lx + rx) >> 1, lc = 2 * x + 1, rc = lc + 1;

		update(l, r, v, lc, lx, m);
		update(l, r, v, rc, m, rx);

		vals[x] = vals[lc] + vals[rc];
	}

	void update(int l, int r, ll v) {
		update(l, r, v, 0, 0, sz);
	}


	ll find(int l, int r, int x, int lx, int rx) {
		lazyP(x, lx, rx);

		if (l >= rx or lx >= r) return 0;
		if (lx >= l and rx <= r) return vals[x];

		int m = (lx + rx) >> 1, lc = 2 * x + 1, rc = lc + 1;

		ll s1 = find(l, r, lc, lx, m);
		ll s2 = find(l, r, rc, m, rx);
		vals[x] = vals[lc] + vals[rc];
		return s1 + s2;
	}

	ll find(int l, int r) {
		return find( l, r, 0, 0, sz);
	}
};