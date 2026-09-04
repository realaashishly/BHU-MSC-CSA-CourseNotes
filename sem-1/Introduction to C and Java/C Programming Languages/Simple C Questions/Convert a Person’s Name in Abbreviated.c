#include <stdio.h>
#include <string.h>
#include <ctype.h>

void getInitials(char name[]){
    int length = strlen(name);

    if(length > 0 && isalpha(name[0])){
        printf("%c. ", name[0]);
    }

    for(int i=0; i<length; i++){
        if(name[i] == ' '){
            
        }
    }
}

int main(void){

    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Hello %s!", name);


    return 0;
}