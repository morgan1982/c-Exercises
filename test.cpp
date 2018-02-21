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

    int word_counter = 0;
    string pre = " ";
    string current;

    while(cin >> current) {

        ++word_counter;

        if (pre == current) {
            cout << "repeated " << current << endl;
        }
        pre = current;


        if (current == "konos") {
            break;
        }
    }
    cout << "num of words " << word_counter << endl;




    return 0;
}