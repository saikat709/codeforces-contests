#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int tt; cin >> tt;

    // freopen("_put.txt", "w", stdout);

    while( tt-- ){
        int n; cin >> n;
        string s; cin >> s;

        if ( n < 3 ){
            cout << 0 << "\n";
            continue;
        }

        ll dash = 0, under = 0;

        for( const char& ch: s ){
            if ( ch == '-' ) dash++;
            else under++;
        }

        if ( dash < 2 || under < 1 ) {
            cout << 0 << "\n";
        } else {
            cout << ( dash/2L ) * under * ( dash - dash/2L ) << "\n";
        }

    }

    return 0;
}