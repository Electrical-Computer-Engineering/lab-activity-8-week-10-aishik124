//Aishik Barua ID:115899946
#include <stdio.h>
#include <string.h> 
#define MAX 50


void shift(char str1[]) 
{
    for (int i = 0; i < strlen(str1); i++) 
	{
        printf("%s\n", str1 + i);
    }
}
int main() {
    char str1[MAX];
    int i;
    printf("Type in string: ");
    scanf("%s", &str1);
    shift(str1);
    return 0;
}

