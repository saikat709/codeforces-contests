#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int countLeadingZeroes( int num ){
    // if ( num == 0) return 32;
    // return __builtin_clz(num);

    // int leadingZeros = 0;
    // for (int i = 31; i >= 0; i--) {
    //     if ((num >> i) & 1) { break; }
    //     leadingZeros++;
    // }
    // if ( num == 0) return 32;
    // return leadingZeros;

    int bits = 0;
    while( (1 << ( bits ) ) <= num ) ++bits;
    return 32 - bits;  // we can also do using bit count only
}


int main(){
    int tt; cin >> tt;
    while( tt-- ){
        int n; cin >> n;
        vi nums(n);
        for (int i = 0; i < n; i++) { cin >> nums[i]; }

        vi cnt(32+1, 0);
        for (int i = 0; i < n; i++) {
            cnt[countLeadingZeroes(nums[i])]++;
        }

        ll ans = 0;

        for (int i = 0; i <= 32; i++) {
            ans += 1ll * cnt[i] * ( cnt[i] - 1 )/2;
        }
        cout << ans << "\n";
    }
    return 0;
}