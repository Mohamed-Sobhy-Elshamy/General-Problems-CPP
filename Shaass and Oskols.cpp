#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Size;
    cin >> Size;
    int arr[Size];
    int sizeKilled;
    int boxNum, bird;

    for(int i=0; i<Size; i++) {
        cin >> arr[i];
    }

    cin >> sizeKilled;
    for(int i=0; i<sizeKilled; i++) {
        cin >> boxNum >> bird; // 2  2

        arr[boxNum - 2] += bird - 1;
        arr[boxNum] += arr[boxNum - 1] - bird;
        arr[boxNum - 1] = 0;
    }
    for(int i=0; i<Size; i++) {
        cout << arr[i] << endl;
    }


    return 0;
}
/*
3 => sum of boxes
2 4 1 => the first box = 2 birds
the second box = 4 birds
the third box = 1 birds
----------------
1    2     3
12  1234   1 ##

1 => count
2 2 => 2 = second box & 2 = second bird from left

12  134   1 ##
اللي ع شمال اللي اتمسح يروح ع الشمال واللي ع يمين اللي تمسح يروح ع اليمين
121   0   134
output =
3
0
3
*/
