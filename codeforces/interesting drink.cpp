#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
typedef long long ll;

int search(vector<int> arr, int start, int end, int val) {
    int n = arr.size();

    while (start <= end) {
        ll mid = (start + end) / 2;
        if (mid == 0 && arr[mid] > val) {
            return 0;
        } else if (mid == n - 1) {
            if (arr[mid] <= val) return n;
        } else if (arr[mid] <= val && arr[mid + 1] > val) {
            return mid + 1;
        } else if (arr[mid] <= val) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
}

int main() {
    fastio;

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int q;
    cin >> q;

    while (q--) {
        int d;
        cin >> d;

        int ans = search(arr, 0, n - 1, d);
        cout << ans << endl;
    }

    return 0;
}