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

    unordered_map<char, int> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s[0]]++;
    }

    int pairs = 0;

    for (auto i = m.begin(); i != m.end(); i++) {
        int x = i->second;
        if (x == 0 || x == 1) continue;
        if (x == 2) continue;

        int a = x / 2;
        int b = x - a;

        pairs += a * (a - 1) / 2;
        pairs += b * (b - 1) / 2;
    }

    cout << pairs << endl;

    return 0;
}