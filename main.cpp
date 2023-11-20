/*
    project:    test_repo
    file:       main.cpp
    author:     Evgeny Murashov
    version:    v0.2
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
        string result = "";
        for (const char c : s) {
            (result.size() && c == result.back()) ? result.pop_back() : result.push_back(c);
        }

        return result;
    }

    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](const auto& rhs, const auto& lhs) {
            return rhs < lhs;
        });
        int diff = arr[1] - arr[0];
        for (int i = 1; i != arr.size(); ++i) {
            if (arr[i] - arr[i - 1] == diff) {
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
