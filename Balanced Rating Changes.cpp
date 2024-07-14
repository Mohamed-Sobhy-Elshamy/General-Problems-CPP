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
    bool b = 0;
    for(int i=0; i<Size; i++) {
        double r1 = (double)arr[i] / 2; // type casting
        if(arr[i]%2 == 0) {
            arr[i] = arr[i] / 2;
        } else {
            if(b == 0) {
                arr[i] = ceil(r1);
                b = 1;
            } else {
                arr[i] = floor(r1);
                b = 0;
            }
        }
    }
    for(int i=0; i<Size; i++) {
        cout << arr[i] << endl;
    }



    return 0;
}
/*
3 =>> count of numbers
10
-5
-5
مجموع التلاتة دول 0
نقسم كل رقم ع 2
5
-2.5
-2.5
مش عاوزين رقم كسري
5
-2
-3

*/
