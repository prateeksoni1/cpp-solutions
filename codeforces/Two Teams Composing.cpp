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
        int n;
        cin >> n;

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            m[x]++;
        }

        int unique = m.size() - 1;

        int ans = 0;
        for (auto i = m.begin(); i != m.end(); i++) {
            int f = i->second;
            ans = max(ans, min(f, unique));
            ans = max(ans, min(f - 1, unique + 1));
        }

        cout << ans << endl;
    }

    return 0;
}