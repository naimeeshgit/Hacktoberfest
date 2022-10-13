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
        // cout << "n is: " << n << endl;

        string s, t;
        cin >> s;
        cin >> t;
        int flag = 0;

        int a, b, c;
        a = 0, b = 0, c = 0;
        int at, bt, ct;
        at = 0, bt = 0, ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                a++;
            }
            if (s[i] == 'b')
            {
                b++;
            }
            if (s[i] == 'c')
            {
                c++;
            }
            if (t[i] == 'a')
            {
                at++;
            }
            if (t[i] == 'b')
            {
                bt++;
            }
            if (t[i] == 'c')
            {
                ct++;
            }
        }

        if (a != at || b != bt || c != ct)
        {
            cout << "NO" << endl;
        }
        else if (s.compare(t) != 0)
        {
            int check = -1;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == 'a' && s[i + 1] == 'b')
                {
                    check = 1;
                }
                if (s[i] == 'b' && s[i + 1] == 'c')
                {
                    check = 1;
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == 'a' && s[i + 1] == 'c' && (t[i] != 'a' || t[i + 1] != 'c'))
                {
                    check = -1;
                }
            }

            if (check < 0)
            {
                cout << "NO" << endl;
            }
            else
            {

                for (int i = 0; i < n - 1; i++)
                {
                    if (t[i] == s[i])
                    {
                        ;
                    }
                    else
                    {
                        if (t[i] == 'b' && s[i] == 'a' && s[i + 1] == 'b')
                        {
                            s[i] = 'b';
                            s[i + 1] = 'a';
                        }
                        if (t[i] == 'c' && s[i] == 'b' && s[i + 1] == 'c')
                        {
                            s[i] = 'c';
                            s[i + 1] = 'b';
                        }
                    }
                }

                if (s.compare(t) == 0)
                {
                    cout << "YES" << endl;
                }
                else
                    cout << "NO" << endl;
            }
        }
        else
            cout << "YES" << endl;
    }
}
