#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {   
        int i = 1;
        sort(intervals.begin(),intervals.end());
        while (i < intervals.size())
        {
                if (intervals[i-1][1] >= intervals[i][0] || intervals[i-1][0] == intervals[i][0]) 
                {
                    intervals[i-1][1] = max(intervals[i-1][1],intervals[i][1]);
                    intervals.erase(intervals.begin() + i);
                }else i++;
        }
        return intervals;

    }
};


// int main(){
//     vector<vector<int>> map = {{1, 3}, {2, 6}, {8, 10}, {8, 9}, {9, 11}, {15, 18}, {2, 4}, {16, 17}};
//     // {{1,3},{2,6},{8,10},{15,18}};
//     Solution s;
//     map = s.merge(map);
//     for (vector<int> s: map){
//         cout << s[0] << s[1] << "  ";
//     }
//     return 0;
// }