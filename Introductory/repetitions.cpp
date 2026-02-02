#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int maxLen = 1;
    int current = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            current++;
        } else {
            current = 1;
        }
        maxLen = max(maxLen, current);
    }

    cout << maxLen << endl;
    return 0;
}
