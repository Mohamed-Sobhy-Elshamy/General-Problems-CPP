#include <bits/stdc++.h>
using namespace std;

int main() {
    long long num;
    cin >> num;

    if(num == 0) {
        cout << 1 << endl;
        return 0;
    }

    if(num%4 == 0) {
        cout << 6 << endl;
    } else if(num%4 == 1) {
        cout << 8 << endl;
    } else if(num%4 == 2) {
        cout << 4 << endl;
    } else if(num%4 == 3) {
        cout << 2 << endl;
    }

    return 0;
}
/*
1378^n => n = 1
1378^1 = 1378 => last digit = 8
1378^2 = 1898884 => last digit = 4
============
1%4 = 1
2%4 = 2
3%4 = 3
4%4 = 0
5%4 = 1
6%4 => 2%4 = 2
*/
