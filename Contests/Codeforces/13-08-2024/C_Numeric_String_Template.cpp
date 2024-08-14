#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int num;
        cin >> num;
        while (num--) {
            string s;
            cin >> s;
            bool flag = false;

            if (s.length() != n) {
                cout << "NO" << endl;
                continue;
            }

            map<int, char> intToChar;
            map<char, int> charToInt;
            for (int i = 0; i < n; i++) {
                int x = arr[i];
                char c = s[i];

                if (intToChar.count(x) && intToChar[x] != c) {
                    flag = true;
                    break;
                }

                if (charToInt.count(c) && charToInt[c] != x) {
                    flag = true;
                    break;
                }

                intToChar[x] = c;
                charToInt[c] = x;
            }

            if (!flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}