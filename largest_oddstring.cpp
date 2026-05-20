#include<string.h>
#include<iostream>
using namespace std;
/*


*/
void findLargestOddSubstring(string num) {
    // write your code here...
    long n = stol(num);
    while(n %2 == 0 && n>0) n /= 10; // checking whther divisible by even digit 2
    if (n>0) cout << n << endl;
    else cout << -1 << endl;
}

int main (){
    string num;
    cin >> num;

    findLargestOddSubstring(num);
    return 0;
}
