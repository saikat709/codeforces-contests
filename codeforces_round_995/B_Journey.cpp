#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;

int main() {
    ios::sync_with_stdio( false );
    cin.tie(nullptr);

    ll t; cin >> t;
    while(t--){
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        ll sum = a + b +c;
        ll days = 0;
        if ( n > sum ){
            ll temp = n/sum;
            days += temp*3;
            n = n%sum;
        }

        if( n ){
            days++;
            n = max(n-a, 0ll);
        }
        if( n ){
            days++;
            n = max(n-b, 0ll);
        }
        if( n ){
            days++;
            n = max(n-c, 0ll);
        }

        cout << days << "\n";
    }

    return 0;
}