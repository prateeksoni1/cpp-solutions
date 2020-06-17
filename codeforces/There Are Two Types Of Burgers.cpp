#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int b, p, f;
        cin >> b >> p >> f;
        int h, c;
        cin >> h >> c;
        int profit = 0;
        if (h > c) {
            while (b >= 2 && p > 0) {
                profit += h;
                p--;
                b -= 2;
            }

            while (b >= 2 && f > 0) {
                profit += c;
                f--;
                b -= 2;
            }
        } else {
            while (b >= 2 && f > 0) {
                profit += c;
                f--;
                b -= 2;
            }

            while (b >= 2 && p > 0) {
                profit += h;
                p--;
                b -= 2;
            }
        }

        cout << profit << endl;
    }
}