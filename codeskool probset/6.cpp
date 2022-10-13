#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;

        int arr[n];
        int sum = 0;

        for(int i=0; i<n; i++)
        {
            cin >> arr[i] ;
            sum += arr[i];
        }        

        int ans = sum - m;

        if(ans > 0)
        cout << ans << endl;
        else cout << "0" << endl;
        
    }
}