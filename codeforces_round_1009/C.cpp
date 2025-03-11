#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int x; cin >> x;
    ll ans = -1;

    for( int y = x-1; y > x/2; y-- ){
        if ( x-y < (x^y) && (x^y) < x+y  ){
            ans = y;
            break;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    // freopen( "_in.txt",  "r", stdin  );
    // freopen( "_out.txt", "w", stdout );

    int tt; cin >> tt;
    while (tt--) solve();
    return 0;
}
