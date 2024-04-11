//Aishik Barua ID:1158999946
#include <stdio.h>
#include <string.h>
#define MAX 100

void commonletters(char str1[], char str2[]) 
{
    int i, j;
    for (i = 0; i < strlen(str2); i++) 
	{
        for (j = 0; j < strlen(str1); j++) 
		{
            if (str1[j] == str2[i]) 
			{
                strcpy(&str1[j], &str1[j + 1]); 
            }
        }
    }
}

int main() 
{
    char str1[MAX], str2[MAX];
    
    printf("Enter first string: ");
    fgets(str1, MAX, stdin);

    printf("Enter second string: ");
    fgets(str2, MAX, stdin);

    commonletters(str1, str2);

    printf("\nOutput:");
    printf("%s", str1);

    return 0;
}
