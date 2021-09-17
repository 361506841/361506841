// getinfo.cpp -- input and output
#include <iostream>

int main(void) {
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;

    cin >> carrots;
    cin.get();
    cout << "Here are two more. ";
    carrots = carrots + 2;
    cout << "Now you hava " << carrots << " carrots." << endl;
    cin.get();
    return 0;
}