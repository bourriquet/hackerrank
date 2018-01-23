#include <algorithm>
#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    int N;
    map<string, string> phonebook;
    
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for (int i = 0; i < N; i++) {
        string S;
        getline(cin, S);
        
        string name;
        string num;
        
        istringstream parse(S);
        parse >> name >> num;
        
        phonebook[name] = num;
    }
    
    string S;
    while (cin >> S) {
        if (phonebook.find(S) == phonebook.end()) {
            cout << "Not found" << endl;
        }
        else {
            cout << S << "=" << phonebook[S] << endl;
        }
    }
    
    return 0;
}
