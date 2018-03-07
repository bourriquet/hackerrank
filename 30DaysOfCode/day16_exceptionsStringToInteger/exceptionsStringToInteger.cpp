#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    
    try {
        cout << stoi(S) << endl;
    }
    catch (const exception &e) {
        cout << "Bad String" << endl;
    }
    
    return 0;
}
