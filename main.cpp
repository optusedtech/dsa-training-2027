#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num ;
    cin >> num;
    int sum = 0;
    while(num != 0){
        int d = num%10;
        sum += d;
        num/=10;
    }
    cout << sum;

    
}
