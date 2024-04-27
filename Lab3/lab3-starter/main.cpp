#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "Welcome to quiz grade averaging!" << endl << endl;

    // ***** file validation and file reading *****

    // menuing
    while(1)
    {
        string option;

        // displays menu
        cout << "Menu: " << endl;
        cout << "0. Exit" << endl;
        cout << "1. Display average" << endl;
        cout << "2. Display grades" << endl;
        cout << "3. Add new grade" << endl;
        cout << "Enter choice: ";
        cin >> option;

        cout << endl;

        // exit
        if(option == "0")
        {
            break;
        }

        // ***** add menu option handling *****

        cout << endl;
    }

    // BONUS/Honors Requirement
    // ************************

    cout << "Good-bye!" << endl;


    return 0;
}
