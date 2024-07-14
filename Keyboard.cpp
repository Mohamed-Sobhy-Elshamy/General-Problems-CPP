#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./", str, finalStr;
    char LR;
    cin >> LR >> str;

    for(int i=0; i<str.size(); i++) {
        int index = s1.find(str[i]);
        if(LR == 'R') {
            finalStr += s1[index-1];
        } else {
            finalStr += s1[index+1];
        }
    }
    cout << finalStr << endl;


    return 0;
}
/*

string = qwertyuiopasdfghjkl;zxcvbnm,./

input
R => right
s;;upimrrfod;pbr = > s => نبص ف ال string اللي فوق
ولو right نجيب اللي قبلها
ولو left نجيب اللي بعدها
--
يعني هنا هنطبع اللي قبل ال s => اللي هي a
وبعدين نمشي ع ال string كله

*/
