#include <bits/stdc++.h>
using namespace std;
using ll = long long;


// Approach 1
// using pattern that matching using (0..n-1)&(n-1)

void solve1(){
    int n, k; cin >> n >> k;
    for( int i = 0; i < n; ++i ){
        cout << (  (i&(n-1)) == i ? k : 0  ) << " ";
    }
    cout << "\n";
}


// Approach 2
// ******* LEARN 'LOCAS THEOREM' *****

// using pattern that leads us that it has a binomial like pattern
// coefficient times XOR of k
// coff odd -> k, even -> 0

const ll maxN = 2e6;
vector<ll> p2(maxN);

void init_nCr(){
    for( ll j=1;j< maxN; j++ ){
        ll v = j, curp2 = 0;
        while( v%2 == 0 ){
            v /= 2;
            curp2++;
        }
        p2[j] = p2[j-1] + curp2;
    }
}
 
void solve2(){
    ll n,k;
    cin>>n>>k;
    const ll t=n-1;
    for(ll i=0;i<n;i++){
        const ll pCnt = p2[t]-p2[i]-p2[t-i];
        if( pCnt )
            cout << 0 << " \n"[i+1 == n];
        else
            cout << k << " \n"[i+1 == n];
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("_in.txt",  "r", stdin );
    // freopen("_out.txt", "w", stdout );
    
    int t; 
    cin >> t;

    init_nCr();  // needed for solve2
    while( t-- ){
        solve2();
    }

    return 0;
}
