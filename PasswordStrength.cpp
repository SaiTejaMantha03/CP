#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int passwordStrength(string password) {
        // since there is no difference in number of small or large we need to either there exist a small and large and digit and rem spl

        int strength = 0;
        vector<int> checker(128,-1);

        for (char c : password)
        {
            if (checker[int(c)] > 0 ) continue;
            else if (65 <= int(c) && int(c) <= 90){
                checker[int(c)] = 1;
                strength += 2;
                continue;
            }else if(97 <= int(c) && int(c) <= 122){
                checker[int(c)] = 1;
                strength++;
            }else if(48 <= int(c) && int(c) <= 57){
                checker[c] = 1;
                strength+=3;
            }else if(checker[3]) {
                    checker[int(c)] = true;
                    strength += 5;
            }
        }
        return strength;
    }   

};


int main(){
    Solution s;
    cout << s.passwordStrength("bbbbBBBBB11#") << endl;
    return 0;

}   