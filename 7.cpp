#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end(), greater<int>());
    long long int expen[n];
    expen[0] = arr[0];

    for(int i=1; i<n; i++)
    {
        expen[i] = arr[i] + expen[i-1];
    }

    while (q--)
    {
       int x,y;
       cin >> x >> y;
       

       if(x==y)
       {
        cout << expen[x-1] << endl; 
       }
       else 
       cout << expen[x-1] - expen[x-y-1] << endl;
    }
}