// #include <bits/sched.h>
// #define ll long long

// int main(){

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int rec(int ind1, int ind2, string &a, string &b, string &c)
{
    if ( ind1 + ind2 == c.size() )
        return 0;

    if ( dp[ind1][ind2] != -1 )
        return dp[ind1][ind2];

    int ans = INT_MAX;
    int ind3 = ind1 + ind2;
    if (ind1 < a.size())
    {
        if (a[ind1] == c[ind3])
        {
            ans = min(ans, rec(ind1 + 1, ind2, a, b, c));
        }
        else
            ans = min(ans, 1 + rec(ind1 + 1, ind2, a, b, c));
    }
    if (ind2 < b.size())
    {

        if (b[ind2] == c[ind3])
        {
            ans = min(ans, rec(ind1, ind2 + 1, a, b, c));
        }
        else
            ans = min(ans, 1 + rec(ind1, ind2 + 1, a, b, c));
    }
    return dp[ind1][ind2] = ans;
}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen( "input.txt", "r", stdin );
    #endif

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string a, b, c;
        cin >> a >> b >> c;

        for (int j = 0; j <= a.size(); j++)
        {
            for (int k = 0; k <= b.size(); k++)
            {
                dp[j][k] = -1;
            }
        }
        cout << rec( 0, 0, a, b, c ) << endl;
    }
}