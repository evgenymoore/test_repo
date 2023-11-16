/*
    project:    test_repo
    file:       main.cpp
    author:     Evgeny Murashov
    version:    v0.1
*/

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
#include <cassert>

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

    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](const auto& rhs, const auto& lhs) {
            return rhs < lhs;
        });
        int diff = arr[1] - arr[0];
        for (int i = 1; i != arr.size(); ++i) {
            if (arr[i] - arr[i - 1] != diff) {
                return false;
            }
        }
        return true;
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

    vector<int> array {5, 3, 1};
    assert(solution.canMakeArithmeticProgression(array));

    return 0;
}
