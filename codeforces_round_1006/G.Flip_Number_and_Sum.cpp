#include <bits/stdc++.h>
#define nline '\n';
using namespace std;
using ll = long long;


// NOT DONE

// Using observervations
// p > n  -> one digit number,  ... so on

// LEARN: Harmonic Series

const ll MOD = 1000000007;


ll an(ll n, ll p) {
	vector<ll> v;
	while(n) {
		v.push_back(n % p);
		n /= p;
	}
	ll a = 0;
	for(auto x : v) {
		a += x;
		a *= p;
	}
	a /= p;
	return a;
}
 
ll sqsum(ll l, ll r) {
	return r*(r+1) * (2*r+1)/6 - (l) * (l-1) * (2*l-1)/6;
}
 
ll sum(ll l, ll r) {
	return r*(r+1)/2 - l*(l-1)/2;
}
 
void solve() {
	ll n,p;
	cin >> n >> p;
	ll ans = 0;
	int i = 2;
	for(; i * i <= n && i <= p; i++) {
		ans += an(n,i) % MOD;
	}
	for(ll l = i, r = i; l <= p && l <= n; l = r + 1) {
		r = min(p,n/ (n/l));
		ll q = n/l;
		ans += (r-l+1) * q % MOD;
		ans += ( n * sum(l,r) ) % MOD;
		ans -= ( q * sqsum(l,r) ) % MOD;
	}
    cout << "$: " << ans << endl;
	if(p > n)
	    ans += ( (p-n)* n )%MOD;
 
	cout << ans << nline;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("_in.txt",  "r", stdin );
    freopen("_out.txt", "w", stdout );
    
    int t = 1; 
    cin >> t;
    while( t-- ) solve();

    return 0;
}
