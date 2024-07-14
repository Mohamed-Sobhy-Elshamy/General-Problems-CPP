#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Size;
    cin >> Size;
    int arr[Size];

    for(int i=0; i<Size; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+Size);
    string res = "NO";

    for(int i=Size-1; i>=2; i--) {
        if(arr[i] + arr[i-1] > arr[i-2] && arr[i-1] + arr[i-2] > arr[i]
           && arr[i] + arr[i-2] > arr[i-1]
           ) {
            res = "YES";
            break;
        }
    }
    cout << res << endl;

    return 0;
}
