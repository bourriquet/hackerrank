#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double mealCost;
    int tipPercent, taxPercent;
    
    scanf("%lf %d %d", &mealCost, &tipPercent, &taxPercent);
    
    double tip = 0.01 * tipPercent * mealCost;
    double tax = 0.01 * taxPercent * mealCost;
    
    int totalCost = round(mealCost + tip + tax);
    
    printf("The total meal cost is %d dollars.", totalCost);
    
    return 0;
}
