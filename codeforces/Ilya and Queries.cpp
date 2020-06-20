#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    int n = s.length();
    vector<int> arr(n);
    arr[0] = 0;
    for (int i = 1; i < n; i++) {
        if (s[i - 1] == s[i]) {
            arr[i] = 1 + arr[i - 1];
        } else {
            arr[i] = arr[i - 1];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << arr[r] - arr[l] << endl;
    }
    return 0;
}