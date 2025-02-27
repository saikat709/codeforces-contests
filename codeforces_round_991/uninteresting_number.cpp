#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t;

    // freopen("put.txt", "w", stdout);

    cin >> t;

    while (t--) {
        string s;
        ll two_count = 0, three_count = 0, sum = 0;
        bool possible = false;
        cin >> s;

        for ( const char& ch : s ){
            if ( ch == '2' ) two_count++;
            if ( ch == '3' ) three_count++;
            sum += ch - '0';
        }

        // cout << "SUM: " << sum << " TWOS: " << two_count << "  THREES: " << three_count << endl;
        for ( int i = 0; i <= two_count; ++i ){
            for ( int j = 0; j <= three_count; ++j ){
                // cout << "IN_LOOP: " << " I: " << i << " J: " << j << endl;
                if ( ( sum + i*(4-2) + j*(9-3) ) % 9 == 0 ){
                    possible = true;
                    // cout << "POSS: "<< ( sum + i*(4-2) + j*(9-3)  ) << " I: " << i << " J: " << j << endl;
                }
            }
        }

        cout << ( possible ? "Yes" : "NO" ) << endl;
    }
    return 0;
}