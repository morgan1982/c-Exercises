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
    int age = -1;
    cout << "enter the age of the recipient: \n";
    cin >> age;
    if ((age <= 0) | ( age >= 101 )) {
        cout << "you re kidding..\n"; 
    }
    if (age < 12) {
        ++age;
        cout << "next year you will be: " << age << endl;
    }
    if (age == 17) {
        cout << "next year you will be able to vote" << endl;
    }
    if (age > 70) {
        cout << "i hope you are enjoying retirement" << endl;
    }
    cout << "Yours sincerely\n" << endl << endl;
    string my_name = "froutopoios";
    cout << my_name << endl; 




    return 0;
}