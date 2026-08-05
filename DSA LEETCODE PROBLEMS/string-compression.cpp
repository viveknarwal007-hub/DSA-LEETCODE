#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";

        if (chars.empty())
            return 0;

        char temp = chars[0];
        int n = chars.size();
        int freq = 1;

        s.push_back(chars[0]);

        for (int i = 1; i < n; i++) {
            if (chars[i] == temp) {
                freq++;
            } else {
                if (freq != 1) {
                    s.append(to_string(freq));
                }
                temp = chars[i];
                freq = 1;
                s.push_back(chars[i]);
            }
        }

        if (freq != 1) {
            s.append(to_string(freq));
        }

        chars.clear();
        chars.assign(s.begin(), s.end());

        return chars.size();
    }
};

int main() {
    Solution obj;

    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int len = obj.compress(chars);

    cout << "Compressed Length: " << len << endl;

    cout << "Compressed Vector: ";

    for (char ch : chars) {
        cout << ch << " ";
    }

    cout << endl;

    return 0;
}