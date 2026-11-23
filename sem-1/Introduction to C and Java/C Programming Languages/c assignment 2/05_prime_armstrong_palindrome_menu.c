#include <stdio.h>
int isPrime(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    int rem, p, i, t = n;
    while (t != 0) { digits++; t /= 10; }
    while (temp != 0) {
        rem = temp % 10;
        p = 1;
        for (i = 0; i < digits; i++) p *= rem;
        sum += p;
        temp /= 10;
    }
    return sum == n;
}
int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}
int main() {
    int choice, num;
    do {
        printf("\n----- MENU -----\n");
        printf("1. Check Prime\n");
        printf("2. Check Armstrong\n");
        printf("3. Check Palindrome\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is Prime.\n", num);
                else
                    printf("%d is Not Prime.\n", num);
                break;
            case 2:
                printf("Enter a number: ");

                scanf("%d", &num);
                if (isArmstrong(num))
                    printf("%d is Armstrong.\n", num);
                else
                    printf("%d is Not Armstrong.\n", num);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPalindrome(num))
                    printf("%d is Palindrome.\n", num);
                else
                    printf("%d is Not Palindrome.\n", num);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}
