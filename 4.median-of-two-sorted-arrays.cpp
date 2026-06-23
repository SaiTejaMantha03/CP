/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int i = 0;
        int j = 0;

        while(i < nums1.size() && j < nums2.size()){
            if (nums1[i] < nums2[j])arr.push_back(nums1[i++]);
            else arr.push_back(nums2[j++]);
        }
        while(i < nums1.size()) arr.push_back(nums1[i++]);
        while(j < nums2.size()) arr.push_back(nums2[j++]);

        int n = nums1.size() + nums2.size();
        double ans = 0;
        if (n%2 == 0) ans = (arr[n/2] + arr[n/2-1])/2.0;
        else ans = arr.at(n/2);
        return ans;
    }
};
// @lc code=end

