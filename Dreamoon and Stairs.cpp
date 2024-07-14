#include <bits/stdc++.h>
using namespace std;

int main()
{
    int countClimb, steps, Max, Min;
    cin >> countClimb >> steps;
    Max = countClimb;

    if(countClimb % 2 == 0) {
        Min = Max / 2;
    } else {
        Min = (Max / 2) + 1;
    }
    for(int i=Min; i<=Max; i++) {
        if(i % steps == 0) {
            cout << i ;
            return 0;
        }
    }
    cout << - 1;

    return 0;
}
/*
10 2
10 = عدد السلالم
2 = عدد الخطوات اللي هياخدهم
1 2 3 4 5 6 7 8 9 10
2 --> 5 => steps
3 --> 6 لازم يكون مضاعف ل رقم اتنين
وبرضو لازم يكون اقل عدد من الخطوات
*/
