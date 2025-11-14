#include <stdio.h>

int main() {
    char title[200];
    FILE *fp;

    // Open file in append mode 
    fp = fopen("borrowed_books.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book:\n");
    fgets(title, sizeof(title), stdin);

    // Write the title to the file
    fputs(title, fp);

    fclose(fp);

    printf("Book title successfully recorded in borrowed_books.txt\n");

    return 0;
}