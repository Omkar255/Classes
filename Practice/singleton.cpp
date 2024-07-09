#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <utility>
#include <iostream>

using namespace std;

// Helper function to extract the first and last digit of a number
pair<char, char> getFirstAndLastDigit(int num) {
    string s = to_string(num);
    return make_pair(s.front(), s.back());
}

int solution(vector<int> &A) {
    // Map to store lists of numbers keyed by their first and last digits
    unordered_map<string, vector<int>> digit_map;
    
    // Fill the map
    for (int number : A) {
        pair<char, char> digits = getFirstAndLastDigit(number);
        string key(1, digits.first);
        key += digits.second;
        digit_map[key].push_back(number);
    }
    
    int max_sum = -1;
    
    // Find the maximum sum of pairs in each group
    for (auto &entry : digit_map) {
        vector<int> &numbers = entry.second;
        if (numbers.size() > 1) {
            sort(numbers.rbegin(), numbers.rend());
            max_sum = max(max_sum, numbers[0] + numbers[1]);
        }
    }
    
    return max_sum;
}
int main() {
    vector<int> A = {1007, 167, 2002, 55, 77, 107};
    cout << solution(A) << endl;  // Output: 1174 (1007 + 167)
    return 0;
}
