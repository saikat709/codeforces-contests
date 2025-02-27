#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){

    int tt; cin >> tt;
    while( tt-- ){
        int n; cin >> n;
        vi nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        bool sorted = true; // check stricktly increasing
        for (int i = 0; i < n-1; i++) {
            if( nums[i] <= nums[i+1] ){
                sorted = false;
            }
        }

        cout << ( sorted ? "NO": "YES" ) << "\n";
    }
    
    return 0;
}