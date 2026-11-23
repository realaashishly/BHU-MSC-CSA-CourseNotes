#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i, len = 0, vowels = 0;
    int consonants = 0, words = 1, isPal = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') str[i] = '\0';
    }
    // Find length manually
    while (str[len] != '\0') len++;
    // Reverse manually
    for (i = 0; i < len; i++)
        rev[i] = str[len - 1 - i];
    rev[len] = '\0';
    // Palindrome check (case-insensitive)
    for (i = 0; i < len; i++) {
        char c1 = str[i], c2 = str[len - 1 - i];
        if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 += 32;
        if (c1 != c2) { isPal = 0; break; }
    }
    // Count vowels, consonants, words
    for (i = 0; i < len; i++) {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        if (ch == ' ') words++;
        else if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowels++;
        else if (ch >= 'a' && ch <= 'z')
            consonants++;
    }
    printf("Reversed String: %s\n", rev);
    if (isPal)
        printf("String is Palindrome.\n");
    else
        printf("String is Not Palindrome.\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Words: %d\n", words);
    return 0;
}
