#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> hash;
        int n = s.size();
        int m = t.size();
        int minlen = 1e9;
        int start = -1;
        int count = 0;
        int l = 0, r = 0;

        // store frequency of t
        for (int i = 0; i < m; i++) {
            hash[t[i]]++;
        }

        while (r < n) {
            // character needed
            if (hash[s[r]] > 0)
                count++;
            hash[s[r]]--;
            // valid window
            while (count == m) {
                if (r - l + 1 < minlen) {
                    minlen = r - l + 1;
                    start = l;
                }
                hash[s[l]]++;
                // removing useful character
                if (hash[s[l]] > 0)
                    count--;
                l++;
            }
            r++;
        }
        if (start == -1)
            return "";

        return s.substr(start, minlen);
    }
};