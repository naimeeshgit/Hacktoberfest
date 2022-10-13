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

int bin_search(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid + 1] > x && arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] == x)
        {
            low++;
        }

        if (arr[mid] > x)
        {
            high--;
        }

        else
        {

            low++;
        }
    }

    return -1;
}

int main()
{
    amazing;
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }

        int prefixsum[n];
        prefixsum[0] = arr[0];

        Fo(i, 1, n - 1)
        {
            prefixsum[i] += prefixsum[i - 1];
        }

        int l, r;

        if (s > prefixsum[n - 1])
        {
            cout << "-1" << endl;
        }
        else if (s == prefixsum[n - 1])
        {
            cout << "0" << endl;
        }
        else
        {

            int max = -1;

            fo(i, n)
            {

                l = i;
                r = n - 1;
                int ret = bin_search(prefixsum, l, r, s + prefixsum[l]) - l;

                if (ret > max)
                {
                    max = ret;
                }
            }

            cout << max << endl;
        }
    }
}