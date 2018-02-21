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

    string pre = " ";
    string current;

    while(cin >> current) {

        if (pre == current) {
            cout << "repeated " << current << endl;
        }
        pre = current;


        if (current == "konos") {
            break;
        }
    }
    cout << current << endl;




    return 0;
}