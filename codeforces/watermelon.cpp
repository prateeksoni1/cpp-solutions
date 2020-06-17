#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 2 is the only even number which cant be divided into even parts
    if (n == 2) {
        cout << "NO" << endl;
        return 0;
    }

    if (n % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}