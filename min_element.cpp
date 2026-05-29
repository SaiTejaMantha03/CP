#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
    int minElement(vector<int> &nums){
        int mini = 1e9;
        for (int i = 0; i < nums.size();i++){
            nums[i] = sumOfDigits(nums[i]);
            mini = min(nums[i],mini);
        }
        return mini;
    }
    int sumOfDigits(int n){
        int sum = 0;
        while(n > 0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
};


