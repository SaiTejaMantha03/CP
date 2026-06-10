#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string> res;
        string currentString = "";
        backtrack(n, k, currentString, 0, 0, res);
        
        return res;
    }

private:
    void backtrack(int n, int k, string current, int cost, int index, vector<string>& res) {
        if (current.length() == n) {
            res.push_back(current);
            return;
        }
        backtrack(n, k, current + '0', cost, index + 1, res);
        int nextCost = cost; 
        if (!current.empty() && current[index - 1] == '0') {
            nextCost += index; // Example cost logic from your original code
        }

        if (nextCost <= k) {
            backtrack(n, k, current + '1', nextCost, index + 1, res);
        }
    }
};