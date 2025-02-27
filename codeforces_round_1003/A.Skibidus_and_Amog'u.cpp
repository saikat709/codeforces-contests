#include <bits/stdc++.h>
using namespace std;
using ll = long long;


 
void solve() {
	string s;
	cin >> s;
    
    s[s.size()-2] = 'i';
    s[s.size()-1] = ' ';

	cout << s << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("_in.txt",  "r", stdin );
    // freopen("_out.txt", "w", stdout );
    
    int t = 1; 
    cin >> t;
    while( t-- ) solve();

    return 0;
}
