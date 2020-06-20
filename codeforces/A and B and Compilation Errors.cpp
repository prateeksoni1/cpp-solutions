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
    vector<vector<int>> arr(3);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[0].push_back(x);
    }

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        arr[1].push_back(x);
    }

    for (int i = 0; i < n - 2; i++) {
        int x;
        cin >> x;
        arr[2].push_back(x);
    }

    sort(arr[0].begin(), arr[0].end());
    sort(arr[1].begin(), arr[1].end());
    sort(arr[2].begin(), arr[2].end());

    int ans1, ans2;

    for (int i = 0; i < n; i++) {
        if (i == n - 1 || (i < n - 1 && arr[0][i] != arr[1][i])) {
            ans1 = arr[0][i];
            break;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (i == n - 2 || (i < n - 2 && arr[1][i] != arr[2][i])) {
            ans2 = arr[1][i];
            break;
        }
    }

    cout << ans1 << endl
         << ans2 << endl;

    return 0;
}