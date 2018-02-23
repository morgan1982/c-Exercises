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

    cout << "enter velocity in miles: \n";
    float miles;
    cin >> miles;
    float km;
    km = miles * 1.604;

    cout << "the velocity in km is: " << km << endl;






    return 0;
}