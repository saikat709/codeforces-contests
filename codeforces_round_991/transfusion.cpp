#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll t;
    cin >> t;
    while (t--) {
        
        ll n;
        cin >> n;

        ll odd_sum = 0;
        ll even_sum = 0;

        for( ll i = 1; i <=n; ++i ){
            ll cur_num; cin >> cur_num;

            if ( i%2 == 0 ){
                even_sum += cur_num;
            } else {
                odd_sum += cur_num;
            }
        }

        double avg_odd =  odd_sum/ ceil(n/2.0);
        double avg_even = even_sum/ floor(n/2);

        if ( avg_even == avg_odd && avg_even == (ll) avg_even ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }        

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
