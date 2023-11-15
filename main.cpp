#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        // brute force
        for (auto it1 = s.begin(); it1 != s.end(); ) {
            auto it2 = it1 + 1;
            if (*it1 == *it2) {
                s.erase(it2);
                s.erase(it1);
                it1 = s.begin();
            }
            else {
                ++it1;
            }
        }
        return s;
    }
};

int main() {
    Solution solution;
    string res = "";
    cout << res.back() << endl;
    cout << solution.removeDuplicates("abbacat") << endl;
    cout << solution.removeDuplicates("azxxzy") << endl;
    cout << solution.removeDuplicates("a") << endl;
    cout << solution.removeDuplicates("aa") << endl;
    cout << solution.removeDuplicates("aaa") << endl;
    cout << solution.removeDuplicates("aaba") << endl;
    cout << solution.removeDuplicates("abcdef") << endl;
    cout << solution.removeDuplicates("abcadefa") << endl;
    cout << solution.removeDuplicates("aababaab") << endl;
    return 0;
}