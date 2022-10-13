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
    int n,x;
    cin >> n >> x;
    vector<int> price(n);
    fo(i,n)
    {
        cin >> price[i];
    }
    vector<int> pages(n);
    fo(i,n)
    {
        cin >> pages[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(x+1,0));

    fo(i,n+1)
    {
        dp[i][0] = 0;
    }
    fo(i,x+1)
    {
        dp[0][i] = 0;
    }

    for( int i = 1; i < n+1; i++)
    {
        for(int j = 1; j < x+1; j++)
        {
            if(price[i-1] <= j)
            {
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-price[i-1]]+pages[i-1]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
            
        }
    }

    cout << dp[n][x] << endl;
}       


