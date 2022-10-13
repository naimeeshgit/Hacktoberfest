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
        int a, b;
        cin >> a >> b;

        int arr[a + b];

        for (int i = 0; i < a + b; i++)
        {
            arr[i] = -1;
        }

        if (a == b)
        {
            for (int i = 0; i < a + b; i++)
            {
                if (i % 2 == 0)
                {
                    arr[i] = 0;
                }
                else
                {
                    arr[i] = 1;
                }
            }
        }

        else if (a > b)
        {
            arr[a + b - 1] = 0;

            int t = b;
            int i = 0;

            while (t--)
            {
                arr[i] = 1;
                i += 2;
            }

            for (int i = 0; i < a + b; i++)
            {
                if (arr[i] == -1)
                {
                    arr[i] = 0;
                }
            }
        }
        else
        {
            arr[a + b - 1] = 1;

            int t = a;
            int i = 0;

            while (t--)
            {
                arr[i] = 0;
                i += 2;
            }

            for (int i = 0; i < a + b; i++)
            {
                if (arr[i] == -1)
                {
                    arr[i] = 1;
                }
            }
        }

        for (int i = 0; i < a + b; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
}