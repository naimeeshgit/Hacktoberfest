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
        int n, s;
        cin >> n >> s;

        int arr[n];

        int one = 0;
        fo(i, n)
        {
            cin >> arr[i];

            if (arr[i] == 1)
            {
                one++;
            }
        }

        if (one < s)
        {
            cout << "-1" << endl;
        }
        else if (one == s)
        {
            cout << "0" << endl;
        }
        else
        {
            int req = one - s;
            int i = 0;
            int j = n - 1;
            int moves = 0;
            int extra = 0;


            int checkl = req;
            int movesl = 0;
            i=0;

            while(1)
            {
                if(checkl==0)
                {
                    break;
                }
                if(arr[i] == 1)
                {
                    checkl--;
                }
                i++;
                movesl++;


            }

            int checkr = req;
            int movesr = 0;
            j=n-1;

            while (1)
            {
                if (checkr == 0)
                {
                    break;
                }
                if (arr[j] == 1)
                {
                    checkr--;
                }
                j--;
                movesr++;
            }

            i=0;
            j=n-1;

            while (req)
            {

                if (arr[i] == 1)
                {
                    moves++;
                    arr[i] = 2;
                    req--;
                    i++;
                    j += extra;
                    extra = 0;
                }

                else if (arr[j] == 1)
                {
                    moves++;
                    arr[j] = 2;
                    req--;
                    j--;
                    i -= extra;
                    extra = 0;
                }

                else
                {
                    i++;
                    j--;
                    moves++;
                    extra++;
                }
            }

            if(moves <= movesl && moves <= movesr)
            {
                cout << moves << endl;

            }
            else if (movesl <= moves && movesl <= movesr)
            {
                cout << movesl << endl;
            }
            else if (movesr <= movesl && movesr <= moves)
            {
                cout << movesr << endl;
            }
        }
    }
}