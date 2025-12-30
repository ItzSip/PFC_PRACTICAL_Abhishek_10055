#include <stdio.h>

int main()
//Abhishek_10055
//RU-25-10055
 {
    int arr[5] = {4, 3, 2, 1, 5};
    int i, max, min;

    max = min = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
//OUTPUT
//Maximum element = 5
//Minimum element = 1