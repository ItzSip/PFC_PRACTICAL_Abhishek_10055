#include <stdio.h>

int main()
//Abhishek_10055
 {
    int a[3][3] = {
        {4, 7, 1},
        {9, 3, 5},
        {2, 6, 8}
    };

    int i, j;
    int max = a[0][0];
    int min = a[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}


//OUTPUT
//Maximum element = 9
//Minimum element = 1