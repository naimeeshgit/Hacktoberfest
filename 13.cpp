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
        int n;
        cin >> n;
        int arr[n];

        int max = -1;

        fo(i,n)
        {
            cin >> arr[i];

            if(arr[i] > max )
            {
                max = arr[i];
            }
        }
         
        int b[max+1];

        fo(i,max+1)
        {
            b[i] = 0;
        }
        

        fo(i,n)
        {
            b[arr[i]]++;
        }
        int count_2 = 0;
        int count_odd = 0;

        fo(i, max+1)
        {
            if(b[i] % 2==1)
            {
                b[i] = 1;
                count_odd++;
            }
            else if(b[i] %2 == 0 && b[i] > 2)
            {
                b[i] = 2;
            }


            if(b[i] == 2)
            {
              count_2 ++ ;
            }
        }
        int ans = 0;

        if(count_2 % 2 == 0)
        {
            ans = count_odd + count_2;
        }
        else ans = count_odd + count_2 -1;


        cout << ans << endl;

        

        
    }
}