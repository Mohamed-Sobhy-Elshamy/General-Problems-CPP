#include <bits/stdc++.h>
using namespace std;

int main() {
    int Size, b, Max;
    cin >> Size >> b >> Max;
    int sum=0, counter=0;

    for(int i=0; i<Size; i++) {
        int value;
        cin >> value;

        if(value <= b) {
            sum += value;
        }
        if(sum > Max) {
            counter++;
            sum = 0;
        }
    }
    cout << counter << endl;


    return 0;
}
/*
2 7 10
=> 2 = number of oranges & 7 = max number of oranges & 10 = max of waste oranges

5 6
=> Sizes of oranges => the first orange size = 5
the second orange size = 6
*/
