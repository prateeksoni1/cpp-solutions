
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    // 1->7
    // 2->10

    int k = (n + 1) * 3 + 1;

    cout << k << endl;

    int x = 0, y = n + 1;

    cout << x << " " << y << endl;

    while (y > 0) {
        cout << x + 1 << " " << y << endl;
        cout << x << " " << y - 1 << endl;
        cout << x + 1 << " " << y - 1 << endl;

        x++;
        y--;
    }

    return 0;
}
