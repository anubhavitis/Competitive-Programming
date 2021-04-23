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

const int cnt = 3200;
vector<int> pri;

ll powcnt(ll x, ll y){
	ll res=0;
	while(x%y==0){
		x/=y;
		res++;
	}

	if(res&1) res--;
	return res;
}

void Sieve(){
	int p[cnt]={};
	for(ll i=2; i*i<cnt; ++i){
		if(p[i]) continue;
		for(ll j=i<<1; j<cnt; j+=i ) p[j]=true;
	}
	for(int i=2; i<cnt; ++i) if(!p[i]) pri.pb(i);
}

void solve() {
	ll n, k;
	cin >> n >> k;

	vector<ll> v(n);
	for (auto &it : v) {
		cin >> it;
		for(ll i=0; i<pri.size(); ++i) it/=pow(pri[i], powcnt(it, pri[i]));
	}
	
	unordered_map<ll, ll> mp;
	ll ans=1;

	for(auto it: v){
		if(mp[it]==0) mp[it]=1;
		else{
			mp.clear();
			mp[it]=1;
			ans++;
		}
	}

	cout<<ans<<endl;
	
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
	Sieve();

	for (int i = 0; i < t; ++i)
		solve();
}

