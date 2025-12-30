#include <stdio.h>

int main() { printf("Abhishek_10055");
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
//OUTPUT
//Abhishek_10055
//AB
//ABC
//ABCD
