#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("_in.txt",  "r", stdin );
    // freopen("_out.txt", "w", stdout );
    
    int t, n; 
    cin >> t;

    while( t-- ){
        cin >> n;

        int max = INT_MIN, start = 0, end = 0;
        vector<int> nums(n, 0);

        for( int& a: nums) cin >> a;

        for( int i = 0; i < n; i++ ){
            int curr = 0;
            for( int j = i; j < n; j++ ){

                if ( nums[i] > nums[j]  ) {
                    curr++;
                }
                if ( nums[i] < nums[j] ) {
                    curr--;
                }

                if ( curr > max ){
                    max  = curr;
                    start = i + 1;
                    end = j +1;
                }
            }
        }
        cout << start << " " << end << "\n";

    }

    return 0;
}
