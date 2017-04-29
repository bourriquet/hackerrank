#include <iostream>
#include <vector>

using namespace std;

void swap (vector<int> &a, int i1, int i2) {
    int copy = a[i1];
    a[i1] = a[i2];
    a[i2] = copy;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int numSwaps = 0;
    
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                swap(a, j, j+1);
                numSwaps++;
            }
        }
    }

    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;

    return 0;
}
