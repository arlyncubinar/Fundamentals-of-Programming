#include <stdio.h>

int main() {
    int grade;
    
    printf("Enter grade: ");
    scanf("%d", &grade);
    
    if (grade >= 75 && grade <=100) {
        printf("Passed\n");
    } else if (grade >= 50 && grade <= 75) {
        printf("failed\n");
    } else {
        printf("invalid\n");
    }

    return 0;
}