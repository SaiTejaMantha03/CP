#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l = 0;
        int len = 0;
        int rep = 0;
        char prev = answerKey[0];
        for (int r = 0;r < answerKey.size();r++){
            if(prev != answerKey[r]) rep++;
            while(rep > k){
                if (answerKey[l] == answerKey[l-1] && l>0) rep--;
                l++;
            }
            len = max(len,r-l+1);
            prev = answerKey[r];
        }
        return len;
    }
};

int main(){
    Solution S;
    cout << S.maxConsecutiveAnswers("TFFT",2);
}