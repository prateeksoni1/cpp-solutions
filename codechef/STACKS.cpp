#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

// Aliases
#define endl "\n"
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--) {
        vi stacks;
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        stacks.push_back(arr[0]);

        for (int i = 1; i < n; i++) {
            int x = arr[i];

            auto it = upper_bound(stacks.begin(), stacks.end(), x);

            // if no stack found, create one
            if (it == stacks.end()) {
                stacks.push_back(x);
            } else {
                // if found, update stacks with new value
                *it = x;
            }
        }

        cout << stacks.size() << " ";

        for (int i = 0; i < stacks.size() - 1; i++) {
            cout << stacks[i] << " ";
        }

        cout << stacks[stacks.size() - 1] << endl;
    }

    return 0;
}