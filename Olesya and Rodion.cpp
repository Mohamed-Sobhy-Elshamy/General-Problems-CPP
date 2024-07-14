#include <bits/stdc++.h>
using namespace std;

int main()
{
    short Size, div;
    cin >> Size >> div;
    string res = "";

    // No Number => Size < 2 & div = 10
    if(Size < 2 && div == 10) {
        cout << -1 << endl;

        // exist number => Size >= 2 & div = 10
    } else if (Size >= 2 && div == 10) {
        for(int i=0; i<Size - 1; i++) {
            res += 1 + '0';
        }
        res += 0 + '0';
        cout << res << endl;
    } else {
        // Size = any number & div != 10
        /*
        Size = 3    div != 9
        999 / 9 = 111
        */

        for(int i=0; i<Size; i++) {
            res += div + '0';
        }
        cout << res << endl;
    }





    return 0;
}

/*
3 2
عايزين رقم الحجم بتاعه اد الاول وبيقبل القسمة ف ال 2
-------------
output => 712
712 => مكونة من 3 digits
وكمان تقبل القسمة ع 2

هنطبع -1 => if --> size / 2 & divider = 10
*/
