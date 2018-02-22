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

    string name = "????";

    cout << "enter your first name: ";
    cin >> name;

    name.resize(name.size() -1);


    cout << "Hello " << name << endl;
    cout << "How are you? " << endl;

    cout << "Me i am fine. I miss you" << endl;

    string friend_name = "???";
    cout << "enter the friend's name: ";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?";

    char friend_sex = 0;

    cout << "if the friend is male enter m or f for female: ";
    cin >> friend_sex;

    if (friend_sex =='m') {
        cout << "tell him i called." <<endl;
    }
    else if (friend_sex == 'f') {
        cout << "tell her i called\n";
    }




    return 0;
}