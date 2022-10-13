#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
#define sp cout << " "
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
int MOD = 1e9 + 7;

int main() {
    amazing;
    int n;
    cin >> n;

    char grid[n][n];
    fo(i, n) {
        fo(j, n) {
            cin >> grid[i][j];
        }
        char temp;
        cin >> temp;
    }
    vector<vector<int>> dp(n, vector<int>(n, 0));
    if(grid[n-1][n-1] =='*')
    {
        cout << 0 << endl;
        return 0;
    }
    dp[n-1][n-1] = 1;

    for(int i =n-1; i >= 0; i--) {
        for(int j = n-1; j >= 0; j--) {
            if(i == n-1 && j == n-1) continue;
            if(grid[i][j]=='*')
            {
                dp[i][j] = 0;
            }
            else
            {
                if(i == n-1)
                {
                    dp[i][j] = dp[i][j+1];
                }            
                else
                {
                    if( j == n-1)
                    {
                        dp[i][j] = dp[i+1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i+1][j] + dp[i][j+1] % MOD;
                    }
                }
            }
        }
    }

    cout << dp[0][0] << endl;
}