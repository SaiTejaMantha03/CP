#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> A(n,0);
    vector<int> B(n,0);


    for (int i = 0;i < n; i++){
        cin >> A[i];
        
    }
    for (int i = 0;i < n; i++){
        cin >> B[i];
        
    }

    for(int i = 0;i < n;i++){
        int own = B[i];
        if(i+1 != A[own-1]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}