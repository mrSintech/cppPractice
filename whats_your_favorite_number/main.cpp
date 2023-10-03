#include <iostream>

using std::cout; //use only cout in namespace
using std::cin;
using std::endl;

int main() {
    int num {23};
    cout << "Enter your favorite Number between 0 and 100: ";
//    cin >> num;
    cout << num << "? Amazing, That's my favorite number too." << endl;
    return 0;
}