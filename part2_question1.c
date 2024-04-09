//Aishik Barua ID:115899946
#include <stdio.h>
#include <string.h> 
#define MAX 32

int mystrcmp(char str1[], char str2[]) {
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] > str2[i]) {
            return 1;
        } else if (str1[i] < str2[i]) {
            return -1;
        }
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int mystrncmp(char str1[], char str2[], int n) {
    int i;
    for (i = 0; i < n && str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] > str2[i]) {
            return 1;
        } else if (str1[i] < str2[i]) {
            return -1;
        }
    }
    if (i == n) {
        return 0;
    } else {
        return mystrcmp(str1, str2);
    }
}

void mystrcpy(char str1[], char str2[]) {
    int i = 0;
    while ((str1[i] = str2[i]) != '\0') {
        i++;
    }
}

void mystrcat(char str1[], char str2[]) {
    int i;
    for (i = 0; str2[i] != '\0'; i++) {
        str1[strlen(str1) + i] = str2[i];
    }
    str1[strlen(str1) + i] = '\0';
}

void myreverse(char str[]) {
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str1[MAX];
    char str2[MAX];
    int n;
    printf("Type in string1: ");
    scanf("%s", str1);
    printf("Type in string2: ");
    scanf("%s", str2);
    printf("Type in a number: ");
    scanf("%d", &n);

    printf("mystrcmp: %d\n", mystrcmp(str1, str2));
    printf("mystrncmp: %d\n", mystrncmp(str1, str2, n));

    mystrcpy(str1, str2);
    printf("mystrcpy: %s\n", str1);

    mystrcat(str1, str2);
    printf("mystrcat: %s\n", str1);

    myreverse(str2);
    printf("myreverse: %s\n", str2);
    
    return 0;
}
