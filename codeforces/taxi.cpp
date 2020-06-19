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
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }

    int taxis = m[4];

    taxis += m[3];
    m[1] -= m[3];
    if (m[1] < 0) m[1] = 0;
    taxis += m[2] / 2;
    m[2] %= 2;

    if (m[2] == 1) {
        m[1] -= 2;
        taxis++;
    }
    if (m[1] < 0) m[1] = 0;

    if (m[1] > 0) {
        taxis += m[1] / 4;
        m[1] %= 4;
    }

    if (m[1] > 0) {
        taxis++;
    }

    cout << taxis << endl;

    return 0;
}