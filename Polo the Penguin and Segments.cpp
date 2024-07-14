#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Size, num, cover = 0;
    cin >> Size >> num;
    // length line => (y - x + 1)
    for(int i=0; i<Size; i++) {
        int x, y;
        cin >> x >> y;
        cover += (y - x + 1);
    }
    cover %= num;
    if(cover == 0) {
        cout << 0 << endl;
    } else {
        cout << num - cover << endl;
    }


    return 0;
}
/*
2 3 => 2 = زوجين مرتبين
1 2 => اول زوج
3 4 => تاني زوج

*/
