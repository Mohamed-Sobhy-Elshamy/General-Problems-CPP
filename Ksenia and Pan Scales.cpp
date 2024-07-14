#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    char c = '|';

    if (str1 > str2 && str1 > str3) {
        cout << str1 << c << str2 + str3 << endl;
    } else if (str2 > str1 && str2 > str3) {
        cout << str3 << c << str2 << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}
