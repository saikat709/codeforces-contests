#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if ( ( l+r == u+d ) && d==u && r==l ){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
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
