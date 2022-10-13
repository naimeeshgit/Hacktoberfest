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
        int arr[8][8];

        fo(i, 8)
        {
            fo(j, 8)
            {
                cin >> arr[i][j];
            }
        }

        pair<int, int> l1;
        pair<int, int> l2;
        pair<int, int> l3;
        pair<int, int> l4;
        
        int flag = 0;

        

        fo(i, 8)
        {
            fo(j, 8)
            {
                if (arr[i][j] == '#')
                {
                    l1.first = i;
                    l1.second = 7-i;
                    
                    if(i>= 1 && j <= 6 && arr[i-1][j+1] == '#')
                    {
                        l2.first = i-1;
                        l2.second = 7-(j+1);
                    }
                    else if(i<=6 && j <= 6 && arr[i+1][j+1] == '#')
                    {
                        l2.first = i + 1;
                        l2.second = 7 - (j + 1);
                    }

                    int flag = -1;

                    break;


                }


            }

            if(flag == -1)
            {
                break;
            }
        }

        fo(i, 8)
        {
            fo(j, 8)
            {
                if (arr[i][j] == '#')
                {
                    l1.first = i;
                    l1.second = 7 - i;

                    if (i >= 1 && j <= 6 && arr[i - 1][j + 1] == '#')
                    {
                        l2.first = i - 1;
                        l2.second = 7 - (j + 1);
                    }
                    else if (i <= 6 && j <= 6 && arr[i + 1][j + 1] == '#')
                    {
                        l2.first = i + 1;
                        l2.second = 7 - (j + 1);
                    }

                    break;
                }
            }
        }
    }
}
