/*
Name: Tyler Zhang
Program Name: Classmate Program
Date: 9/24/24
Extra: None
*/
#include <iostream>
using namespace std;
int main() {
    int age1, age2;
    cout << "What is your age?" << "\n";
    cin >> age1;
    cout << "What is your friend's age?" << "\n";
    cin >> age2;
    if (age1 > age2) {
        cout << "You are older than your friend." << "\n";
    }
    else if (age1 < age2) {
        cout << "You are younger than your friend." << "\n";
    }
    else {
        cout << "You guys have the same age." << "\n";
    }
    return 0;
}
