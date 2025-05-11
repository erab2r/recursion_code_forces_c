#include <stdio.h>

void printLoveRecursion(int n) {
    if (n == 0)
        return;
    
    printf("I love Recursion\n");
    printLoveRecursion(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printLoveRecursion(n);

    return 0;
}


