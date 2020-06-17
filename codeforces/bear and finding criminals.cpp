#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    int n, a;
    cin >> n >> a;
    a--;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 && arr[a] == 1) {
            ans++;
        } else if (i > 0) {
            if (a - i >= 0 && a + i < n) {
                if (arr[a - i] == 1 && arr[a + i] == 1) ans += 2;
            } else if (a - i >= 0) {
                if (arr[a - i] == 1) ans++;
            } else {
                if (arr[a + i] == 1) ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}