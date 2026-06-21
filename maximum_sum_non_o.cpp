#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    long long maximumSum(vector<int>& nums, int m, int l, int r) {
        long long sum = 0;
        int l = 0;
        int r = 0;
        while(r < nums.size()){
            int curr = sum + nums[r];
            if (curr > sum) sum = curr;
            r++;
        }
        return sum;
    }
};

int main(){
    
}
