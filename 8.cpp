#include <bits/stdc++.h>
using namespace std;
#include <string.h>

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;
        cout << "n is: " << n << endl;

        string s, t;
        cin >> s;
        cin >> t;
        int flag = 0;

        if (n == 1)
        {
            if (s[0] == t[0])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == t[i])
                {
                    ;
                }
                else if (s[i + 1] == 'b' && s[i] == 'a')
                {
                    s[i] = 'b';
                    s[i + 1] = 'a';
                }

                else if (s[i + 1] == 'c' && s[i] == 'b')
                {
                    s[i] = 'c';
                    s[i + 1] = 'b';
                }
                else
                {
                    flag = -1;
                    break;
                }
            }

            if (flag == 0)
            {
                if (s.compare(t) == 0)
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
