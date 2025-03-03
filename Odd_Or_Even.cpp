#include <iostream>
using namespace std;

int main(){
    int userIn;

    cout << "Enter a number: ";       //Prompt user to enter any number
    cin >> userIn;                    //Gets the integer entered by user

    if (userIn % 2 == 0) {            // Figures out whether the integer is divisible by 2 with no remainder (must be even number)
        cout << userIn << " is totally an even number." << endl;    //Outputs the number and that the number is even
    }
    else{                         //If it is an integer but is not divisible by 2 with no remainder, it must be odd
        cout << userIn << " is DEFINITELY an odd number." << endl;      //Outputs the number and that the number is odd
    }
    return 0;
}