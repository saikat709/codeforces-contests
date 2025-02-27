#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<array<int, 2>> byPositive;
    vector<array<int, 2>> byNegative;
    vector<array<int, 2>> visited;

    int n; cin >> n;

    vi lower_prices(n), upper_prices(n);
    for( int i = 0; i <=n; ++i ) cin >> lower_prices[i];
    for( int i = 0; i <=n; ++i ) cin >> upper_prices[i];

    for( int i = 0; i <=n; ++i ){
        int a = lower_prices[i], b = upper_prices[i];
        byPositive.push_back({a, b});
        byNegative.push_back({b, a});
    }

    sort(byPositive.begin(), byPositive.end(), greater());
    sort(byNegative.begin(), byNegative.end(), greater());

    int i = 0; int j = 0;
    ll price = 0;
    while( i < n && j < n ){
        while(byPositive[i][0] >= byNegative[j][0] ){
            price += byPositive[i][0];
        }

        // wrong going...
    }
    
    return 0;
}