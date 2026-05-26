#include<iostream>
// This problem needs maximum points to be selected from cards and topic : sliding window

using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        long totalSum = 0;
        long sum = 0;
        int l = 0;
        int r = n-k;

        // summing first n-k 
        for (int i = 0;i < n-k;i++){
            sum += cardPoints[i];
        }
        totalSum = sum;
        long minsum = sum;
        while(r < n){
            sum = sum - cardPoints[l++];
            sum = sum + cardPoints[r];
            totalSum += cardPoints[r++];
            minsum = min(sum,minsum);
        }
        return (int) totalSum - minsum;
    }
};