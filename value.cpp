#include<iostream>
using namespace std;

class Solution{
    public:
    int solver(int n,int k, int m, vector<long long> &c,vector<long long> &v){
        long long max_value = 0;
        long long colour = 0;

    }
    int solvable(){

    }
};
int main(){
    int n,k,m;
    cin >> n >> k >> m;
    vector<long long> c(n),v(n);
    for (int i = 0;i < n;i++){
        cin >> c[i] >> v[n];
    }

    Solution s;
    cout << s.solver(n,k,m,c,v) << endl;
}