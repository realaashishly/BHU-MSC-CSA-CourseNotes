#include <stdio.h>
// for more functionality
#include <string.h>

int main(){
    char name[] = "hello world";
    printf("%c\n", name[0]);

    // strlen(name);
    // strcpy(name2, name);
    // strcmp(name1, name2);
    // strcat(name1, name2);

    printf("Length = %zu\n", strlen(name));
    return 0;
}