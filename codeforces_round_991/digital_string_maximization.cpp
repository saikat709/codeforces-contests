#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    string s; cin >> s;
    ll n = s.size();
    s = "#" + s;

    for ( ll i = 2; i <=n; ++i ){
        if ( s[i] == '0' ) continue;
        if ( i > 1 && s[i] -1 > s[i-1] ){
            swap(s[i-1], s[i]);
            s[i-1] = s[i-1] - 1;
            i -= 2;
        }
    }

    s.erase(s.begin(), s.begin()+1);
    cout << s << endl;
}

int main(){
    ll t; cin >> t;
    while ( t-- ){
        solve();
    }

    return 0;
}

/*
void solve(){
  string s;cin >> s;
  ll n = s.size();
  s='#'+s;
  for(ll i =2; i<=n; i++){
    if(s[i]=='0') continue;
    if(i>1 && s[i]-1>s[i-1]){
      swap(s[i], s[i-1]);
      s[i-1] = s[i-1]-1;
      i-=2;
    }
  }
  for(ll i =1; i<=n; i++) cout << s[i];
 
}
*/