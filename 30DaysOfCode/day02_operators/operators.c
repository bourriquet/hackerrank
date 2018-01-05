#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double mealCost;
    int tip, tax;
    
    scanf("%lf %d %d", &mealCost, &tip, &tax);
    
    int totalCost = round(mealCost + (0.01 * tip * mealCost) + (0.01 * tax * mealCost));
    
    printf("The total meal cost is %d dollars.", totalCost);
    
    return 0;
}
