#include <iostream>
using namespace std;

int main(){
    int userIn;

    cout << "Enter a number: ";
    cin >> userIn;

    if (userIn % 2 == 0) {
        cout << userIn << " is totally an even number." << endl;
    }
    else {
        cout << userIn << " is DEFINITELY an odd number." << endl;
    }
    return 0;
}