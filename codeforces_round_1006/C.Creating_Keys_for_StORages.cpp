#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("_put.txt", "w", stdout );
    
    int t; 
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> v(n, 0);
        int orValue = 0;

        for( int i = 0; i < n; ++i ){
            if ( (x|i) != x ) break;
            v[i] = i;
            orValue |= i;
        }

        if ( orValue != x ) v[n-1] = x;

        for(auto &i : v)    cout << i << ' ';
        cout << "\n";
    }

    return 0;
}
