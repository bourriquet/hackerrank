#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    int another_i;
    double another_d;
    char another_s[100];
    
    scanf("%d %lf %[^\n]s", &another_i, &another_d, another_s);

    printf("%d\n", (i + another_i));
    printf("%.1lf\n", (d + another_d));
    printf("%s%s\n", s, another_s);
    
    return 0;
}
