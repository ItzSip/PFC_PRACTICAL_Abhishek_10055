#include <stdio.h>

int main() 
//Abhishek_10055
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j, sum;

    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}


//OUTPUT
//Sum of row 1 = 6
//Sum of row 2 = 15
//Sum of row 3 = 24