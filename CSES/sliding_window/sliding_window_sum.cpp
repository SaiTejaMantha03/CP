/*

Explanation: The input array is [3,0,1,8,2,4,7,6]. The windows are [3,0,1,8,2], [0,1,8,2,4], [1,8,2,4,7] and [8,2,4,7,6], 
and their sums are 14, 15, 22 and 27. Thus, the answer is 14 xor 15 xor 22 xor 27 = 12.
    [3,0,1,8,2,4,7,6]
*/


#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    long long sum(vector<int> & arr, int k){
        long long result;
        long long sum = 0;
        for (int i  = 0;i < k;i++){
            sum += arr[i];
        }    
        int l =0;
        int r =k;
        result = sum;
        while (r < arr.size()){
            sum += arr[r++];
            sum -= arr[l++];
            result ^= sum;
        }
        return result;
    }
};

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> nums(n,0);

    int temp;
    
    // Read UP TO n elements, but stop if the input runs out early
    for (int i = 0; i < n; i++) {
        if (cin >> temp) {
            nums.push_back(temp);
        } else {
            // Input stream ended early! 
            break; 
        }
    }
    Solution s;
    cout << s.sum(nums,k) << endl;
    return 0;
}