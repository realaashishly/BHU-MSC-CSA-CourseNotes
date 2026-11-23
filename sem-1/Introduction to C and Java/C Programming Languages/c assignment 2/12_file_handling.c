#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;
    // Create and write file
    fp = fopen("data.txt", "w");
    fprintf(fp, "Hello World\n");
    fprintf(fp, "C Programming is fun\n");
    fprintf(fp, "File Handling in C\n");
    fclose(fp);
    // Read file back
    fp = fopen("data.txt", "r");
    printf("File Content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }
    fclose(fp);
    printf("\nCharacters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
