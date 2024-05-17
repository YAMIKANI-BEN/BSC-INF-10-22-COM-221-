#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int *dynamicInteger = nullptr;

    char *dynamicString = new char[200];

    /*prompts the user to enter integer*/
    cout << "Assign a value to the dynamically allocated integer " << endl;
    cin >> number;
    /*prompts the user to enter a string*/
    cout << "Assign a value to the dynamically allocated string " << endl;
    cin >> dynamicString;
    /*returning the output*/
    cout << "The value of the dynamically allocated integer is " << number << endl;
    cout << "The value of the dynamically allocated string is " << dynamicString << endl;
    return 0;
}