#include<bits/stdc++.h>
using namespace std;

#define bolt ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long int
#define pb push_back
#define ALL(a) (a).begin(),(a).end()
#define F first
#define S second
#define MAXX 200009
#define INF 9999999
#define MOD 1000000007
#define read(arr) for(auto &it : arr) cin >> it

int binary_lower(int value, int arr[], int n)
{
	int start = 0;
	int end = n - 1;
	int ans = -1;
	int mid;

	while (start <= end) {
		mid = (start + end) / 2;
		if (arr[mid] >= value) {
			end = mid - 1;
			ans = mid;
		}
		else {
			start = mid + 1;
		}
	}
	return ans;
}
int power(int x, int y, int p)
{
	int res = 1; // Initialize result

	x = x % p; // Update x if it is more than or
	// equal to p

	while (y > 0)
	{

		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}

// Returns n^(-1) mod p
int modInverse(int n, int p)
{
	return power(n, p - 2, p);
}

int fac[200005];
void store() {
	fac[0] = 1;
	for (int i = 1 ; i <= 200004 ; i++) {
		fac[i] = (fac[i - 1] * i) % 1000000007;
	}
}
int nCr(int n,
        int r, int p)
{
	// If n<r, then nCr should return 0
	if (n < r)
		return 0;
	// Base case
	if (r == 0)
		return 1;

	// Fill factorial array so that we
	// can find all factorial of r, n
	// and n-r

	return (fac[n] * modInverse(fac[r], p) % p
	        * modInverse(fac[n - r], p) % p)
	       % p;
}
int n, m, k;
void solve() {
	cin >> n >> m >> k;

	int arr[n];
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	int count = 0;
	sort(arr, arr + n);
	for (int i = m - 1 ; i < n ; i++) {
		int cur = binary_lower(arr[i] - k , arr, n);
		int temp = (i - cur);
		count += nCr(temp, m - 1, 1000000007);
		count = count % 1000000007;
	}
	cout << count << endl;
}

int32_t main() {
	bolt

#ifndef ONLINE_JUDGE
	freopen ( "/home/zeddie/Documents/input.txt", "r", stdin );
	freopen ( "/home/zeddie/Documents/output.txt", "w", stdout );
	freopen ( "/home/zeddie/Documents/error.txt", "w", stderr );
#endif
	int T = 1;
	cin >> T;
	store();
	while (T--) solve();
	return 0;
}