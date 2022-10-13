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
#include <string>

int check_palindrome(char s[])
{
    if (s[0] == s[4] && s[1] == s[3])
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    amazing;
    int t;
    cin >> t;
    while (t--)
    {
        char s[5];

        fo(i, 5)
        {
            cin >> s[i];
        }

        int time;
        cin >> time;

        int h = time / 60;
        int m = time % 60;

        if (h == 24 && m == 0)
        {
            int ret = check_palindrome(s);

            cout << ret << endl;
        }
        else
        {

            int x = (s[0] - 48) * 10 + (s[1] - 48);
            int y = (s[3] - 48) * 10 + (s[4] - 48);

            char check[5];
            

            // fo(i, 5)
            // {
            //     cout << check[i];
            // }

            // cout << x << " " << y << endl;

            int ans = 0;
            check[0] = 'a';
            check[1] = 'b';
            check[2] = ':';
            check[3] = 'c';
            check[4] = 'd';

            // fo(i, 5)
            // {
            //     cout << check[i];
            // }
            // cout << endl;

            // fo(i, 5)
            // {
            //     cout << s[i];
            // }
            // cout << endl;

            ans += check_palindrome(s);
            while (s[0] != check[0] || s[1] != check[1] || s[3] != check[3] || s[4] != check[4])
            {

                ans += check_palindrome(check);

                int carry = 0;
                y += m;
                if (y / 60 == 1)
                {
                    carry = 1;
                }
                y = y % 60;

                x += h + carry;
                x = x % 24;

                check[0] = (x / 10) + 48;
                check[1] = (x % 10) + 48;
                check[2] = ':';
                check[3] = (y / 10) + 48;
                check[4] = (y % 10) + 48;

                // fo(i, 5)
                // {
                //     cout << check[i];
                // }
                // cout << endl;
            }

            cout << ans << endl;
        }
    }
}