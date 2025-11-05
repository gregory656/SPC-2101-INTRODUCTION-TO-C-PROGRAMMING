// sales_total.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float sale, total = 0.0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening sales.txt!\n");
        exit(1);
    }

    while (fscanf(fp, "%f", &sale) == 1) {
        total += sale;
    }

    printf("Total sales for the day: Ksh %.2f\n", total);

    fclose(fp);
    return 0;
}