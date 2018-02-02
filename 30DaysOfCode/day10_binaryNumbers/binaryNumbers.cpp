#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int max = 0;
    int count = 0;
    
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
            if (count > max) {
                max = count;
            }
        } else {
            count = 0;
        }
        
        n /= 2;
    }
    
    cout << max;
    
    return 0;
}

