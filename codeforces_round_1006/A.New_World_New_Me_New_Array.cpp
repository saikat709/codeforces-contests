#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int tt; cin >> tt;

    // freopen("_put.txt", "w", stdout);

    while( tt-- ){
        int n, k, p; cin >> n >> k >> p;

        if ( n*p < abs(k) ){
            cout << -1 << "\n";
        } else {
            cout << ceil( 1.0* abs(k)/p ) << "\n";
        }
    }

    return 0;
}