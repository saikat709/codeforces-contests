#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("_in.txt",  "r", stdin );
    // freopen("_out.txt", "w", stdout );
    
    int t, k; 
    cin >> t;

    while( t-- ){
        cin >> k;
        vector<array<int, 2>> res;

        int x = 0, y = 0, totalP = 0, curP = 0;

        while( totalP < k ){
            if ( totalP + curP > k ){
                y++;
                curP  = 0;
            }
            res.push_back({x,y});
            totalP += curP;
            curP++;
            x++;
        }

        cout << res.size() << "\n";
        for( array<int,2> point: res ){
            cout << point[0] << " " << point[1] << "\n";
        }

    }

    return 0;
}
