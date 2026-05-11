    #include<iostream>
    using namespace std;

    /*  
    Input Format: 

    4
    4 1
    2 3 5 7
    4 3
    2 3 5 7
    4 3
    3 9 11 6
    4 4
    3 9 11 6
    */

    int main(){

        int T;
        cin >> T;
        while(T--){
            int n,x;
            cin >> n >> x;
            int max = 0;
            for(int j = 0;j < n;j++){
                int i;
                cin >> i;
                if (i % x == 0){
                    if (i > max) max = i;
                }
            }
            cout << max << endl;
        }
        return 0;
    }