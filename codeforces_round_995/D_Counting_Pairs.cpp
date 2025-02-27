#include <bits/stdc++.h>
#define ll long long
#define vll vector<long long>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while( t-- ){
        ll n, x, y; cin >> n >> x >> y;
        vll nums(n);
        for( int i = 0; i < n; ++i ) cin >> nums[i];

        ll sum = accumulate( nums.begin(),  nums.end(), 0 );
        ll pairs_count = 0;

        for( int i = 0; i < n; ++i ){
            for( int j = i+1; j<n; ++j ){
                ll second_sum = sum - nums[i] - nums[j];
                if ( second_sum >= x && second_sum <= y  ){
                    pairs_count++;
                }
            }
        }
        cout << pairs_count << "\n";
    }
    return 0;
}