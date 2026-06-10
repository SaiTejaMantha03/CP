#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> nums;

    for (int i = 0; i < n;i++){
        auto temp;
        cin >> temp;
        if(temp != ""){
            nums.push_back(temp);
        }else {
            break;
        }
    }
}