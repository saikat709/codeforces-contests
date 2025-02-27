#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    int n; cin >> n;
    vi nums(n);
    for(int i = 0; i<n; ++i ){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    int ans = ( nums[n-1] - nums[0] )*( n -1 );

    cout << ans;

    return 0;
}