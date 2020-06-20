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
    while (n >= 5) {
        n -= 5;
        n /= 2;
    }

    vector<string> ans = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << ans[n] << endl;
    return 0;
}