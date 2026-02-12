#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); i++)

const ll INF = 4e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int rev = 0;
    while (n != 0)
    {
        int d = n % 10;
        rev *= 10;
        rev += d;
        n /= 10;
    }
    cout << rev;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }

    return 0;
}