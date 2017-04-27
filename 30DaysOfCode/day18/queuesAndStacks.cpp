#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    private:
        stack<char> s = {};
        queue<char> q = {};
    
    public:
        void pushCharacter(char i) {
            s.push(i);
        }

        void enqueueCharacter(char i) {
            q.push(i);
        }

        char popCharacter() {
            char i = s.top();
            s.pop();
            return i;
        }

        char dequeueCharacter() {
            char i = q.front();
            q.pop();
            return i;
        }
};

int main() {
    string s;
    getline(cin, s);
    Solution obj;
    
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
