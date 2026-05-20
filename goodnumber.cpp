#include<iostream>
using namespace std;


class Solution {
public:
    int countGoodNumbers(long long n) {
        int res = counter(n);
        return res;
    }

    long long counter(long long n){
        long long number = 1;
        if (n == 0) return number % (10^9 +7); // base case


        if (n &1) return counter(n-1) * 5;
        else return counter(n-1) * 4;

    }
};


int main(){
        Solution s;
        cout << s.countGoodNumbers(4) << endl;
        return 0;
    }