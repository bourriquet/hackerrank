#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        char S[10000];
        scanf("%s", S);
        
        for (int j = 0; j < strlen(S); j += 2) {
            printf("%c", S[j]);
        }
        printf(" ");
        for (int j = 1; j < strlen(S); j += 2) {
            printf("%c", S[j]);
        }
        printf("\n");
    }
    
    return 0;
}
