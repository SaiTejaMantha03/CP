// Using sliding window since it's substring
// set to monitor characters

#include<iostream>
#include<set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        
        int l = 0, r = 0;
        int len = 0;

        while(r < s.size()) {

            // Remove characters until duplicate disappears
            while(st.count(s[r]) > 0) {
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);
            r++;

            len = max(len, r - l);
        }

        return len;
    }
};

// int main() {
//     Solution sol;
//     cout << sol.lengthOfLongestSubstring("abcabcbb");
//     return 0;
// }