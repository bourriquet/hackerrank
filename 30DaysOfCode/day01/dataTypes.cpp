#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int another_i;
    double another_d;
    string another_s;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> another_i >> another_d;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, another_s);

    // Print the sum of both integer variables on a new line.
    cout << i + another_i << endl;

    // Print the sum of the double variables on a new line.
    cout << fixed;
    cout << setprecision(1) << d + another_d << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + another_s << endl;
    
    return 0;
    
}
