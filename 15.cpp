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

int main()
{
    amazing;
    int t;
    cin >> t;
    while (t--)
    {
        char arr[8][8];

        fo(i, 8)
        {
            fo(j, 8)
            {
                cin >> arr[i][j];
                // cout << arr[i][j];
            }

            // cout << endl;
        }

        int x = -1;
        int y = -1;

        for (int i = 1; i < 7; i++)
        {

            for (int j = 1; j < 7; j++)
            {
                if (arr[i][j] == '#')
                {
                    // cout << "ye";

                    if (arr[i + 1][j+1] == '#' && arr[i - 1][j+1] == '#' && arr[i+1][j - 1] == '#' && arr[i-1][j - 1] == '#')
                    {
                        // cout << "ye";
                        x = i + 1;
                        y = j + 1;
                    }
                }
            }
        }

        cout << x << " " << y << endl;
    }
}