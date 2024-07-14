#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, columns, process;
    cin >> rows >> columns >> process; // 6 6 3
    char arr[rows][columns];

    for(int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            arr[i][j] = '.'; // initial values = .
        }
    }

    while(process--) { // 3 2 1
        int r1, c1, r2, c2;
        char c;
        cin >> r1 >> c1 >> r2 >> c2 >> c;
        // compare between r1 & r2
        for(int i=min(r1, r2)-1; i<=max(r1, r2)-1; i++) {
            for(int j=min(c1, c2)-1; j<=max(c1, c2)-1; j++) {
                arr[i][j] = c;
            }
        }
    }
    // Print
    for(int i=0; i<rows; i++) {
        for(int j=0; j<columns; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }


    return 0;
}

/*
    6 6 3 => 6 = rows & 6 = cols & 3 = processes
    r1 c1 r2 c2 char
    1  1  2  6  a
    5  1  6  6  c
    2  3  5  4  b
    ----------------
     c1   c2
     012345
    0...... = r1
    1...... = r2
    2......
    3......
    4......
    5......
    */

