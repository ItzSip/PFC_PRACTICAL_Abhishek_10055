#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() { printf("Abhishek_10055\n");
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);   // pass addresses

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
//OUTPUT
//Abhishek_10055
//Enter two numbers: 10 30 
//Before swapping: x = 10, y = 30
//After swapping: x = 30, y = 10
