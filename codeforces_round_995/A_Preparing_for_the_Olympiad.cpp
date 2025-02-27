#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vi a(n), b(n+1, 0);
        
        for( int i=0; i<n; i++ ) cin >> a[i];
        for( int i=0; i<n; i++ ) cin >> b[i];

        int diff = 0;
        for( int i=0; i<n; i++ ){
            diff += max(a[i] - b[i+1], 0);
        }

        cout << diff << "\n";
    } 

    return 0;
}