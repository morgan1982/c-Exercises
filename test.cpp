#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>


// using std::cout;
// using std::endl;
// using std::cin;
using namespace std;


inline void keep_window_open()
{
    char ch;
    cin >> ch;
}

int main(void) {

    int val1, val2;
    cout << "enter 2 values: " << endl;

    cin >> val1 >> val2;

    cout << val1 << " " << val2 << endl;

    if (val1 < val2) {
        cout << "num 2 is bigger\n" << endl;
    }
    else if (val1 > val2) {
        cout << "num 1 is bigger\n" << endl;
    }else {
        cout << "nums are same\n" << endl;
    }

    cout << "sum is: " << val1 + val2 << endl << endl;

    cout << "dif is: " << val1 - val2 << endl << endl;
    cout << "product is: " << val1 * val2 << endl << endl;
    cout << "ratio is: " << val1 / val2 << endl << endl;


 






    return 0;
}