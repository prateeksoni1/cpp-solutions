#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

typedef long long ll;

using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll minimum = INT_MAX;
        ll ans = 0;

        for (ll i = 0; i < n; i++) {
            ll a;
            cin >> a;

            minimum = min(minimum, a);
            ans += minimum;
        }

        cout << ans << endl;
    }

    return 0;
}