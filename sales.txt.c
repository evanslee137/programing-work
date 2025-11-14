#include <stdio.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;

    // Open the file for reading
    fp = fopen("sales.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    // Read each transaction amount and add to total
    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    // Close the file
    fclose(fp);

    // output total sales
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
