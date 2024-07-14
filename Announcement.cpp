#include <bits/stdc++.h>
using namespace std;

long long arr2[10000001] = {0};
int main()
{
    long long Size;
    cin >> Size;
    long long arr1[Size];

    for(int i=0; i<Size; i++) {
        cin >> arr1[i];
        arr2[arr1[i]]++;
    }
    int res = 0;
    for(int i=0; i<10000001; i++) {
        if(arr2[i] > 1) {
            res += arr2[i] - 1;
        }
    }
    if(res == 0) {
        cout << -1 << endl;
    } else {
        cout << res << endl;
    }


    return 0;
}
/*
3 => number of problem
1 1 2  => ف كده مسألة واحدة اتكررت
Output => 1
*/
