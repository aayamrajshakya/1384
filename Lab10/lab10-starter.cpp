#include <iostream>
#include <string>
#include <vector>

using namespace std;

// function declaration
string buildEq(string eqTemplate, string tab);

int main()
{
    // vector of equation templates to test...
    vector<string> equations{
        "a + a",
        "((b - b)^2 + (b - b)^2)^1/2",
        "a + b",
        "ab + (b - b / a(a + a))",
        "(a ^ a) + (a - a + b)",
        "ab"
    };

    cout << "Welcome to the equation builder!" << endl << endl;

    // iterates through the vector
    // calls function on each vector item
    for(int i = 0; i < equations.size(); i++)
    {
        cout << "Starting equation: " << equations[i] << endl << endl;

        // builds equation
        string eq = buildEq(equations[i], "");

        cout << endl << "Equation built: " << eq << endl << endl;
    }

    return 0;
}

string buildEq(string eqTemplate, string tab)
{

}
