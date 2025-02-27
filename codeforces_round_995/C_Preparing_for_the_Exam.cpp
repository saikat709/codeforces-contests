#include <bits/stdc++.h>
#define vi vector<int>
using namespace std;


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     while(t--){
//         int n, m, k; cin >> n >> m >> k;
//         vi a(m), q(k);
//         map<int, int> mp;

//         for( int i=0; i<m; i++ ) cin >> a[i];
//         for( int i=0; i<k; i++ ) cin >> q[i];

//         for( const int& ans: q ){
//             mp[ans] = 1;
//         }

//         for( const int& ai: a ){
//             int mark = 0;
//             for(int i = 1; i<=n; ++i ){
//                 if( i == ai ) continue;
//                 mark += mp[i];
//             }
//             cout << ( mark == n-1 );
//         }
//         cout << "\n";
//     }


//     return 0;
// }

void solve(int tc)
{
    int n,m,k;
    cin >> n >> m >> k;
    int a[m],b[k];
    set<int> s;
    for(int i=0; i<m; i++) cin >> a[i];
    for(int i=0; i<k; i++){
        cin >> b[i];
        s.insert(b[i]);
    }
    if(n==k){
        for(int i=0; i<m; i++) cout << 1;
        cout << endl;
    }
    else if(k==n-1){
        // int p;
        // for(int i=0; i<k; i++){
        //     if(i+1!=b[i]){
        //         p=i+1;
        //         break;
        //     }
        // }
        // for(int i=0; i<m; i++){
        //     if(a[i]==p)
        //     cout << 1;
        //     else
        //     cout << 0;
        // }
        // cout << endl;
        for(int i=0; i<m; i++){
            if(s.find(a[i])==s.end())
            cout << 1;
            else 
            cout << 0;
        }
        cout << endl;
    }
    else{
        for(int i=0; i<m; i++) cout << 0;
        cout << endl;
    }
 
}

int main(){

    return 0;
}