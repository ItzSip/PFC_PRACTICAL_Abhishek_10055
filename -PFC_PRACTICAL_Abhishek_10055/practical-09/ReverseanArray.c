#include <stdio.h>

int main()
//Abhishek_10055
 {
    int arr[5] = {4, 3, 2, 1, 5};
    int i;

    printf("Reversed Array:\n");

    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//OUTPUT
//Reversed Array:
//5 1 2 3 4
