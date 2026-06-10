/*
You are given an array of n integers. Your task is to calculate the sum of each window of k elements, from left to right.
In this problem the input data is large and it is created using a generator.
Input
The first line contains two integers n and k: the number of elements and the size of the window.
The next line contains four integers x, a, b and c: the input generator parameters. The input is generated as follows:



Output
Print the xor of all window sums.
Constraints

1 \le k \le n \le 10^7
0 \le x, a, b \le 10^9
1 \le c \le 10^9

Example
Input:
8 5
3 7 1 11

Output:
12

Explanation: The input array is [3,0,1,8,2,4,7,6]. The windows are [3,0,1,8,2], [0,1,8,2,4], [1,8,2,4,7] and [8,2,4,7,6], 
and their sums are 14, 15, 22 and 27. Thus, the answer is 14 xor 15 xor 22 xor 27 = 12.
    [3,0,1,8,2,4,7,6]
*/


#include<iostream>
using namespace std;

class Solution{
    public:
    void sum(vector<int> & arr, int k){
        for (int i  = 0;i < k;i++){
            
        }    
    }
};

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> nums(n,0);

    for (int i = 0;i < n; i++){
        cin >> nums[i];
    }

    
}