#include <stdio.h>

struct Student {
    char name[50];
    char regNo[20];
    int totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;

    // Open the binary file for reading
    fp = fopen("results.dat", "rb");

    if (fp == NULL) {
        printf("Error: Could not open results.dat\n");
        return 1;
    }

    printf("STUDENT EXAM RESULTS\n");
    printf("====================\n");

    // Read each record 
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %d\n\n", s.totalMarks);
    }

    fclose(fp);

    return 0;
}
