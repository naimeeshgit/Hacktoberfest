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

vector<int> merge(int a[], int b[])
{
    int c = sizeof(a) / sizeof(int) + sizeof(b) / sizeof(int);
    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int);
    vector<int> resultant;
    int j = 0;
    int k = 0;

    for (k < n && j < m)
    {
        if (a[j] > b[k])
        {
            resultant.push_back(b[k]);
            k++;
        }
        else
        {
            resultant.push_back(a[j]);
            j++;
        }
    }
}

int closest(int a[], int b[], int x)
{
    ;
}

int main()
{
    amazing;
    int arr[4] = {1, 4, 5, 7};
    int arr2[4] = {10, 20, 30, 40};
    int x = 32;

    int ret = closest(arr, arr2, x);
    cout << ret << endl;
}