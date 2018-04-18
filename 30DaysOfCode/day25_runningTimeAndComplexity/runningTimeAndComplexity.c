#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        bool flag = true;
        
        if (num < 2) {
            printf("Not prime\n");
        } else if (num <= 3) {
            printf("Prime\n");
        } else if (num % 2 == 0 || num % 3 == 0) {
            printf("Not prime\n");
        } else {
            for (int i = 5; i <= sqrt(num); i += 2) {
                if (num % i == 0) {
                    printf("Not prime\n");
                    flag = false;
                    break;
                }
            }
            if (flag == true) {
                printf("Prime\n");
            }
        }
    }
    
    return 0;
}
