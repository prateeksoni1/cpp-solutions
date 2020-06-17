#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool isVowel[CHAR_MAX] = {false};

void init() {
    isVowel['A'] = true;
    isVowel['a'] = true;
    isVowel['E'] = true;
    isVowel['e'] = true;
    isVowel['I'] = true;
    isVowel['i'] = true;
    isVowel['O'] = true;
    isVowel['o'] = true;
    isVowel['u'] = true;
    isVowel['U'] = true;
    isVowel['Y'] = true;
    isVowel['y'] = true;
}

int main() {
    fastio;
    string s;
    cin >> s;
    int n = s.length();
    init();
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (isVowel[s[i]])
            continue;
        else {
            ans += ".";
            ans += tolower(s[i]);
        }
    }

    cout << ans << endl;

    return 0;
}