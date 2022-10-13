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


int bin_search(int arr[], int x, int low, int high)
{
    if(low <= high)
    {
        int mid = low + (high-low)/2;

        if(arr[mid] == x)
        {
            return mid;
        }

        if(arr[mid] > x)
        {
            return bin_search(arr, x, mid +1 , high);
        }

        return bin_search(arr, x, low, mid-1);
    }
    return -1;
}

int main() {
    amazing;
    int arr[10] =  {10, 8, 7, 6, 5, 4, 3, 2, 1, -1};
    int high = 9;
    int low = 0;
    int x = 5;
     
    int ret = bin_search(arr, x, low, high);

    cout << ret << endl;

}