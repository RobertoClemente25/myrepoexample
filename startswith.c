#include <string.h>
#include "stdio.h"
#include "stdbool.h"

bool startswith(char*, char* );

void main(){
    char* string = "abce";

    printf("%d\n", (0-strlen(string)));

    if(startswith(string, "abc") == true){
        printf("True");
    }else{
        printf("false");
    }
}

bool startswith(char* poss, char* chunk) {
    char* result = strstr(poss, chunk);

    return result != NULL && result == poss;
}