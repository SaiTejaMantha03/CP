#include<iostream>
#include<map>

using namespace std;

class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if (nums.size() % k  != 0) return false;
        
        map<int,int> m;
        for (int i : nums){
            m[i]++;
        }
        
        while(!m.empty()){
            int curr = m.begin()->first;
            for (int i = 0 ;i < k; i++){
                int j = curr+i;
                if(m[j] <= 0) return false;
                m[j]--;
                if(m[j] == 0) m.erase(j);
                
            }
        }
        return true;
    }
}; 