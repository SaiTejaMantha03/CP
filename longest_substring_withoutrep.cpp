// Using sliding window since its substring
// hashmap to montior strings

#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int l = 0;
        int r = 0;
        int n = s.size();
        int maxlen = 0,len =0;

        while (r < n){
            if(hash[s[r]] != -1){
                if(s[r] >= l){
                    l = hash[s[r]]+1;
                }
            }
            len = r-l+1;
            maxlen = max(maxlen,len);
            hash[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};