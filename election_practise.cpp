#include <iostream>
using namespace std;



int main() {
    int n,k;
    cin >> n >> k;
    int magic_figure = n/2 + 1;
    if (k < magic_figure) {
        cout << magic_figure - k << endl;
    }else {
        cout << 0 << endl;
    }
    return 0;
}