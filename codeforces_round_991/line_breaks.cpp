#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int m, n, w_count = 0;
    string s, res = "";
    bool done = false;

    while( t-- ){
        cin >> n >> m;

        while( n-- ){
            cin >> s;
            if ( res.size() + s.size() <= m && !done ){
                res += s;
                w_count++;
            } else {
                done = true;
            }
        }

        cout << w_count << "\n";
        w_count = 0;
        res = "";
        done = false;
    }
    return 0;
}