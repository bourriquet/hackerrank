#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int another_i;
    double another_d;
    string another_s;

    cin >> another_i >> another_d;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, another_s);

    cout << i + another_i << endl;
    cout << fixed;
    cout << setprecision(1) << d + another_d << endl;
    cout << s + another_s << endl;
    
    return 0;
}
