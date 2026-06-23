/*
 * @lc app=leetcode id=1482 lang=cpp
 *
 * [1482] Minimum Number of Days to Make m Bouquets
 */

// @lc code=start
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)bloomDay.size() <(long long) m * k) return -1;

        int s = 1;
        int e = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = e;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (isPossible(bloomDay, m, k, mid)) {
                ans = mid;
                e = mid-1;
            } else {
                s = mid+1;
            }
        }
        return ans;
    }
    bool isPossible(vector<int> &bloomDay,int m,int k,int Day){
        int count = 0;
        int bloom = 0;
        for (int i : bloomDay) {
            if (i <= Day) count++;
            else {
                bloom += (count / k);
                count = 0;
            }
        }
        bloom += (count / k);
        return bloom >= m;
    }
};
// @lc code=end

