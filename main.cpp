#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int rev = 0;
    while (num != 0)
    {
        int d = num % 10;
        rev *= 10;
        rev += d;
        num /= 10;
    }
    cout << rev;
}
