
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

/********************************** SOE ***************************************/
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