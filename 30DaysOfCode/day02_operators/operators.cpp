#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double mealCost;
    int tip, tax;
    
    cin >> mealCost >> tip >> tax;
    
    double totalCost = round(mealCost + (0.01 * tip * mealCost) + (0.01 * tax * mealCost));
    
    cout << "The total meal cost is " << totalCost << " dollars." << endl;
    
    return 0;
}
