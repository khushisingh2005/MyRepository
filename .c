#include <stdio.h>

int main() {
    float percentage;

    // Input percentage marks from the user
    printf("Enter the percentage marks: ");
    scanf("%f", &percentage);

    // Determine the grade based on the percentage
    char grade;
    if (percentage >= 90.0) {
       printf("Grade:A");
    } else if (percentage >= 80.0) {
        printf("Grade:B");
    } else if (percentage >= 70.0) {
        printf("Grade:C");
    } else if (percentage >= 60.0) {
        printf("Grade:D");
    } else {
        printf("Grade:F");
    }

    // Print the grade


    return 0;
}
