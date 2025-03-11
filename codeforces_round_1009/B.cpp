#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve2(){
    int n; cin >> n;
    vector<int> nums(n, 0);
    ll sum = 0;
    for( int& num: nums ){
        cin >> num;
        sum += num;
    }

    if ( n == 1 ){
        cout << nums[0] << '\n';
    } else {
        cout << sum - n + 1  << '\n';
    }
}

void solve() {
    int n; cin >> n;
    vector<int> nums(n, 0);
    for( int& num: nums ) cin >> num;

    if ( n == 1 ){
        cout << nums[0] << '\n';
        return;
    }

    sort(nums.begin(), nums.end());

    ll cur = nums[0];
    for( int i = 1; i < n; i++ ){
        cur = (cur + nums[i] ) - 1;
    }

    cout << cur << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    freopen( "_in.txt",  "r", stdin  );
    freopen( "_out.txt", "w", stdout );

    int tt; cin >> tt;
    while (tt--) solve2();
    return 0;
}
