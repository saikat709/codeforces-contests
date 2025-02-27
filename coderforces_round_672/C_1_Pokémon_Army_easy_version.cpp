#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
using namespace std;


int main(){
    int tt; cin >> tt;
    while( tt-- ){

        int n, q; cin >> n >> q;
        vi pokemons(n);
        for (int i = 0; i < n; i++) {
            cin >> pokemons[i];
        }

        vll mx(n+1);
        vll mn(n+1);

        for (int i = n-1; i >= 0; i--) {
            mx[i] = max(mx[i+1], pokemons[i] - mn[i+1] );
            mn[i] = min(mn[i+1], pokemons[i] - mx[i+1] );
        }

        cout << mx[0] << "\n";
    }
    return 0;
}