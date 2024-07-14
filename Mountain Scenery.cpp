#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Size, num; // 3 2
    cin >> Size >> num;
    int points = (Size * 2) + 1; // 7
    int arr[points];

    for(int i=0; i<points; i++) {
        cin >> arr[i];
    }

    // 0 5 3 5 1 5 2
    for(int i=1; i<points; i++) {
        if(arr[i] > arr[i - 1] + 1 && arr[i] > arr[i + 1] + 1) {
            arr[i]--;
            num--;
            if(num == 0) {
                break;
            }
        }
    }
    for(int i=0; i<points; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}
/*
3 2
=> 3 = عدد القمم الجبال
3 * 2 + 1 = 7 = وهما عدد النقط اللي عندك
0 5 3 5 1 5 2 => الارتفاعات
ارجع الارتفاعات الى اصلهم
كل قمة كبيرة بين قمتين صغيرين اقللها واحد
بس هقلل مرتين بس عشان مديني 2
------------------------
0 5 3 4 1 4 2 =>>> Output
*/
