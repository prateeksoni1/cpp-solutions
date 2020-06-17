#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int flag = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x == 1) {
            flag = 1;
        }
    }

    if (!flag) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}