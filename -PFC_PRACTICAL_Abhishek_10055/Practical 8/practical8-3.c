#include <stdio.h>

void printRightTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() { printf("Abhishek_10055\n");
    int n;
    printf("Enter height: ");
    scanf("%d", &n);

    printRightTriangle(n);

    return 0;
}
//OUTPUT
//Abhishek_10055
//Enter height: 5
//*
//**
//***
//****
//*****
