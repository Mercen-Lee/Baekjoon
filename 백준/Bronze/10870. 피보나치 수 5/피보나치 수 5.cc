#include <stdio.h>

int main(void) {
    int f[20] = { 0, 1, }, n;
    for(int i=2; i<21; i++)
        f[i] = f[i-1] + f[i-2];
    scanf("%d", &n);
    printf("%d", f[n]);
}