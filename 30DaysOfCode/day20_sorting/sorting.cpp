#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }

    int numSwaps = 0;
    
    for (int i = 0; i < a.size(); i++) {
        int maxIndex = n - i - 1;
        for (int j = 0; j < maxIndex; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numSwaps++;
            }
        }
    }
    
    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] << endl;
    
    return 0;
}
