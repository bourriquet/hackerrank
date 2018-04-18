#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        bool flag = true;
        
        if (num < 2) {
            cout << "Not prime" << endl;
        } else if (num <= 3) {
            cout << "Prime" << endl;
        } else if (num % 2 == 0 || num % 3 == 0) {
            cout << "Not prime" << endl;
        } else {
            for (int i = 5; i <= sqrt(num); i += 2) {
                if (num % i == 0) {
                    cout << "Not prime" << endl;
                    flag = false;
                    break;
                }
            }
            
            if (flag) {
                cout << "Prime" << endl;
            }
        }
    }
    
    return 0;
}
