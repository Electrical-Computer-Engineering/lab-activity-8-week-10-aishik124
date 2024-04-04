//Aishik Barua ID:115899946
#include <stdio.h>
#include <string.h>
#define MAX 11

void shift(char str[]) {
    int length = strlen(str);
    for (int i = 0; i <=length; i--) {
        str[i] = str[i + 1];
    }
    
}

int main() {
    char str[MAX];

    printf("Enter a string of 10 characters: ");
    scanf("%s", str);

    printf("%s\n", str);

    for (int i = 0; i < 5; i++) {
        shift(str);
        printf("%s\n", str);
    }

    return 0;
}

