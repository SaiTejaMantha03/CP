#include<iostream>
using namespace std;

/*
Final element:


*/

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;

        int finale = 0;
        for (int i =0 ; i<n; i++){
            int temp = 0;
            cin >> temp;
            finale ^= temp;
        }
        cout << finale << endl;
    }
    return 0;
}