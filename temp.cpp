
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

/********************************** nCr ***************************************/
vi fact, inv;

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

void preprocess(int n) {
	fact.resize(n + 1);
	inv.resize(n + 1);

	fact[0] = inv[0] = 1;
	for (int i = 1; i <= n; ++i) {
		fact[i] = (fact[i - 1] * i) % M;
		inv[i] = power(fact[i], M - 1, M);
	}
}