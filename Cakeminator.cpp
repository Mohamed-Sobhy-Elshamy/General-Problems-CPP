#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    // Initial value for row, col = 0
    int arr1[row] = {0}, arr2[col] = {0};

    for(int i=0; i<row; i++) {
        string line;
        cin >> line; // "S..."
        for(int z=0; z<col; z++) {
            if(line[z] == 'S') {
                arr1[i] = 1;
                arr2[z] = 1;
            }
        }
    }

    int ca = 0;
    for(int i=0; i<row; i++) {
        for(int z=0; z<col; z++) {
            if(arr1[i] == 0 || arr2[z] == 0) {
                ca++;
            }
        }
    }
    cout << ca << endl;




    return 0;
}
