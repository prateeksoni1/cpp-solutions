#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    string s = "codeforces";
    string ans = "";

    int flag = 0;

    for (int i = 1; i <= 100; i++) {
        ll x = 1;
        for (int j = 0; j < 10; j++) {
            x = x * i;
        }

        if (n <= x) {
            ll k = 0;

            while ((x / i) * (i - 1) >= n) {
                k++;
                x = (x / i) * (i - 1);
            }

            for (int j = 0; j < 10; j++) {
                for (int c = 0; c < i - (j < k); c++) {
                    ans += s[j];
                }
            }

            break;
        }
    }

    cout << ans << endl;

    return 0;
}