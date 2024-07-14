#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using map
    int Size;
    cin >> Size;
    map<string, int> foot;

    for(int i=0; i<Size; i++) {
        string key;
        cin >> key;
        if(foot[key] == 0) {
            foot[key] = 1;
        } else {
            foot[key] += 1;
        }
    }
    map<string, int>::iterator myFoot;
    string resKey = foot.begin() -> first;
    int resVal = foot.begin() -> second;
    // for each
    for(auto myFoot = foot.begin(); myFoot != foot.end(); myFoot++) {
        // greater team was wanned
        if(myFoot->second > resVal) {
            resKey = myFoot -> first;
            resVal = myFoot -> second;
        }
    }
    cout << resKey << endl;

    return 0;
}
/*
5 => size teams
A --> 1 team
ABA --> 2 team
ABA --> 3 team
A --> 4 team
A --> 5 team
---------------
A       3
ABA     2
A -> Is winner
Output = A
*/
