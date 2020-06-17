#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        int a = 0, b = 0;
        for (int i = 0; i < n * 2; i++) {
            if (s[i] == '1') {
                if (i % 2 == 0) {
                    a++;
                } else {
                    b++;
                }
            }

            // if goals of one + remaining chances of one < goals of second, then second won
            if (a > b + (2 * n - i) / 2 || b > a + (2 * n - i - 1) / 2) {
                cout << i + 1 << endl;
                flag = 1;
                break;
            }
        }

        if (!flag) {
            cout << 2 * n << endl;
        }
    }
}