#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;


class Solution{
    public:
        bool checkInclusion(string s1,string s2){
                vector<int> hashs1(26,0),hashs2(26,0);
                int n = s1.size();
                int m = s2.size();
                if (n > m) return false; // s1 < s2
                
                for (int i = 0;i < n;i++){
                    hashs1[s1[i] - 'a']++;
                    hashs2[s2[i] - 'a']++;
                }
                int matches = 0;
                for (int i = 0;i < 26;i++){
                    if(hashs1[i] == hashs2[i]) matches++;
                }
                int l = 0;
                for (int r = n;r < m;r++){
                    if (matches ==26 ) return true;

                    int i = hashs2[r] - 'a';
                    hashs2[i]++;
                    if(hashs1[i] == hashs2[i]) matches++;
                    else if(hashs1[i]+1 == hashs2[i]) matches--;

                    int i = hashs2[l] - 'a';
                    hashs2[i]++;
                    if(hashs1[i] == hashs2[i]) matches++;
                    else if(hashs1[i]-1 == hashs2[i]) matches--;
                    l++;
                }
                return matches == 26;
        }
};