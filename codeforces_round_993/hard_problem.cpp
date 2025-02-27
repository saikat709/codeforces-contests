#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t; cin >> t;

    while( t-- ){
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ans = 0;
        int n = m;

        ans += min(m, a);
        m = max( 0, m - a);

        ans += min(n, b);
        n = max( 0, n-b);


        if( m > 0 ){
            ans += min( m, c );
            c = max( 0, c - m );
        }

        if( n > 0 ){
            ans += min( n, c );
            c -= n;
        }

        cout << ans << "\n";
    }
    
    return 0;
}