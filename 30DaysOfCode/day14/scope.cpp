#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
      vector<int> elements;
  
  	public:
  	  int maximumDifference;
    
    	Difference(vector<int> a) {
        elements = a;
    }

    void computeDifference() {
        int minNum = 10;
        int maxNum = 1;
        
        for (int i = 0; i < elements.size(); i++) {
            if (elements[i] < minNum)
                minNum = elements[i];
            if (elements[i] > maxNum)
                maxNum = elements[i];
        }
        
        maximumDifference = (maxNum - minNum);
    }
};

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    cout << d.maximumDifference;
    
    return 0;
}
