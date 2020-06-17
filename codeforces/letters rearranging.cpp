#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        unordered_map<char, int> m;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
        }

        if (m.size() == 1) {
            cout << -1 << endl;
        } else {
            for (auto i = m.begin(); i != m.end(); i++) {
                for (int j = 0; j < i->second; j++) {
                    cout << i->first;
                }
            }
            cout << endl;
        }
    }
    return 0;
}