#include <string>
#include <sstream>
#include <iostream>

using namespace std;

string convertToBinary(int num) {
    string numBin = "";
    
    while (num != 0) {
        int r;
        r = num % 2;
        
        ostringstream convert;
        convert << r;
        numBin.insert(0, convert.str());
        
        num /= 2;
    }
    
    return numBin;
}

int consecutiveOnes(int num) {
    string numBin = convertToBinary(num);
    
    int count = 0;
    int max = 0;
    
    for (int i = 0; i < numBin.length(); i++) {
        if (numBin[i] == '1') {
            count++;
        }
        else {
            count = 0;
        }
        
        if (count > max) {
            max = count;
        }
    }
    
    return max;
}

int main(){
    int n;
    cin >> n;
    
    cout << consecutiveOnes(n);
    
    return 0;
}
