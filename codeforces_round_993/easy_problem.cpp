#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    int t; cin >> t;

    while( t-- ){
        int n; cin >> n;
        int ans  = 0;
        for( int i = 1; i<n; ++i ){
            for( int j = 1; j<n; ++j ){
                if( i == n-j ){
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}