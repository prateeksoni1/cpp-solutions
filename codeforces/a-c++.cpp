#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define range(i, a, n) for (int i = a; i < n; i++)
#define pb push_back

using namespace std;

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

        if (a > b) {
            swap(a, b);
        }

        int count = 0;

        while (a <= n && b <= n) {
            a += b;
            swap(a, b);
            count++;
        }

        cout << count << endl;
    }

    return 0;
}