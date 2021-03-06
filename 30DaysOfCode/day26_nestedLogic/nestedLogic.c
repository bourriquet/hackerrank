#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dayReturned, monthReturned, yearReturned;
    int dayExpected, monthExpected, yearExpected;
    
    scanf("%d %d %d", &dayReturned, &monthReturned, &yearReturned);
    scanf("%d %d %d", &dayExpected, &monthExpected, &yearExpected);
    
    if (yearReturned > yearExpected) {
        printf("%d", 10000);
    } else if (yearReturned == yearExpected) {
        if (monthReturned > monthExpected) {
            int fine = 500 * (monthReturned - monthExpected);
            printf("%d", fine);
        } else if (monthReturned == monthExpected) {
            if (dayReturned > dayExpected) {
                int fine = 15 * (dayReturned  - dayExpected);
                printf("%d", fine);
            } else {
                printf("%d", 0);
            }
        } else {
            printf("%d", 0);
        }
    } else {
        printf("%d", 0);
    }
    
    return 0;
}
