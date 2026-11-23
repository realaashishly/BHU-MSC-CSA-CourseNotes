#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define AREA(r) (PI * (r) * (r))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
enum Week { SUN, MON, TUE, WED, THU, FRI, SAT };
typedef struct {
    int id;
    char name[20];
} Student;
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Sum = %d\n", a + b);
    printf("Area of circle (r = 7): %.2f\n", AREA(7));
    printf("Maximum of 10 and 20: %d\n", MAX(10, 20));
    enum Week day = WED;
    printf("Day %d = Wednesday\n", day);
    Student s = {1, "Aashish"};
    printf("Student: ID = %d, Name = %s\n", s.id, s.name);
    return 0;
}
