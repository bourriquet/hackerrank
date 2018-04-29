#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int dayReturned, monthReturned, yearReturned;
    int dayExpected, monthExpected, yearExpected;
    
    cin >> dayReturned >> monthReturned >> yearReturned;
    cin >> dayExpected >> monthExpected >> yearExpected;
    
    if (yearReturned > yearExpected) {
        cout << 10000 << endl;
    } else if (yearReturned == yearExpected) {
        if (monthReturned > monthExpected) {
            int fine = 500 * (monthReturned - monthExpected);
            cout << fine << endl;
        } else if (monthReturned == monthExpected) {
            if (dayReturned > dayExpected) {
                int fine = 15 * (dayReturned - dayExpected);
                cout << fine << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            cout << 0 << endl;
        }
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}
