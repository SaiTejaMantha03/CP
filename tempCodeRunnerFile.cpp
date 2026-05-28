#include<iostream>
#include<set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> map; // for checking duplicates hashmap
        int l = 0;
        int r = 0,len = 0;
        int size = 0;
        while (r < s.size()){
            // check if there and remove till r+1
            while(map.count(s[r] > 0)){
                map.erase(s[l++]);
            }
            map.insert(r++);
            len = max(len,r-l+1);
        }
        return len;
    }
};