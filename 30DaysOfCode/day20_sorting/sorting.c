#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d", &a[a_i]);
    }
    
    int numSwaps = 0;
    
    for (int i = 0; i < n; i++) {
        int maxIndex = n - i - 1;
        for (int j = 0; j < maxIndex; j++) {
            if (a[j] > a[j + 1]) {
                int copy = a[j];
                a[j] = a[j + 1];
                a[j + 1] = copy;
                numSwaps++;
            }
        }
    }
    
    printf("Array is sorted in %d swaps.\n", numSwaps);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[n - 1]);

    return 0;
}
