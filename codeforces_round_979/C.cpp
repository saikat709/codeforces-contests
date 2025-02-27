#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    bool flag = false;
    if ( s[0] == '1' && s[n-1] == '1' ) flag = true;
    for( int i = 0; i < n-1; ++i ){
        if ( s[i] == '1' && s[i+1] == '1' ) flag = true;
    }
    cout << flag ? "YES" : "NO";
    return 0;
}