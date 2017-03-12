#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for (int i = 0; i < T; i++) {
        string S;
        getline(cin, S);
        
        for (int j = 0; j < S.length(); j += 2) {
            cout << S[j];
        }
        cout << " ";
        
        for (int j = 1; j < S.length(); j += 2) {
            cout << S[j];
        }
        cout << endl;
    }
    
    return 0;
}
