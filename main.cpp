#include <bits/stdc++.h>
using namespace std;
/*
1
11 2
20 12 3
28 21 13 4
35 29 22 14 5
41 36 30 23 15 6
46 42 37 31 24 16 7
50 47 43 38 32 25 17 8
53 51 48 44 39 33 26 18 9
55 54 52 49 45 40 34 27 19 10
*/

int main()
{
    int n;
    cin >> n;
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        int x = start;
        int diff = n - i + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x -= diff;
            diff++;
        }
        start += n - i + 1;
        cout << endl;
    }

    return 0;
}