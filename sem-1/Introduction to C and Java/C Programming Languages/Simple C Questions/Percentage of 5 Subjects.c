#include <stdio.h>

int main(void){

    float m1, m2, m3, m4, m5;
    float totalMarks, percentage, maxMarks;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &m1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &m2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &m3);
    printf("Enter marks for Subject 4: ");
    scanf("%f", &m4);
    printf("Enter marks for Subject 5: ");
    scanf("%f", &m5);

    printf("Enter maximum marks per subject (e.g., 100): ");
    scanf("%f", &maxMarks);

    totalMarks = m1 + m2 + m3 + m4 + m5;
    percentage = (totalMarks/(maxMarks*5)) * 100;

    printf("\n--- Result Summary ---\n");
    printf("Total Marks Obtained : %.2f\n", totalMarks);
    printf("Percentage           : %.2f%%\n", percentage);


    return 0;
}