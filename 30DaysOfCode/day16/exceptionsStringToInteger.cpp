#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    
    try {
        stoi(S);
        cout << S << endl;
    }
    catch (const exception &e) {
        cout << "Bad String" << endl;
    }
    
    return 0;
}
