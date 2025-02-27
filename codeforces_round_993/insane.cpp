#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

bool isPower(int n, int b) {
    if (n <= 0 || b <= 1) return false; 
    double logResult = log(n) / log(b);
    return floor(logResult) == logResult; 
}

int main(){
    

    return 0;
}