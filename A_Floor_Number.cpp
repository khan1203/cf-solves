#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int roomNo, roomPerFloor, room = 2, f = 1;
        cin >> roomNo >> roomPerFloor; // 7 3

        while (room <= roomNo) // co=0, f=1 --> co=5, f=2 --> co=8, f=3
        {
            // co = x + 2;
            room = room + roomPerFloor;
            f++;
        }

        cout << f << "\n";
    }

    return 0;
}