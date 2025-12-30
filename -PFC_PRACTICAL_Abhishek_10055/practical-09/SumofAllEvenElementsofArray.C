#include <stdio.h>

int main()
//Abhishek_10055
 {
    int arr[5] = {4, 3, 2, 1, 5};
    int i, sum = 0;

    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}


//OUTPUT
//Sum of even elements = 6