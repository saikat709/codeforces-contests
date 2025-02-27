#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int t; 
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Length of array a
        vector<int> a(n), b(n);
        unordered_map<int, int> freq; // Frequency map to track counts

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            b[i] = a[i]; // Always set b[i] = a[i]
            freq[b[i]]++; // Update frequency map

            // The frequency map ensures that a[i] is a mode in the prefix
        }

        for (int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
