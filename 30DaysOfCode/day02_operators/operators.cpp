#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double mealCost;
    int tipPercent, taxPercent;
    
    cin >> mealCost >> tipPercent >> taxPercent;
    
    double tip = 0.01 * tipPercent * mealCost;
    double tax = 0.01 * taxPercent * mealCost;
    
    double totalCost = round(mealCost + tip + tax);
    
    cout << "The total meal cost is " << totalCost << " dollars." << endl;
    
    return 0;
    
}
