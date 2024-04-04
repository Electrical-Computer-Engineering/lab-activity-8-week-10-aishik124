//Aishik Barua ID:115899946
#include <stdio.h>
#include <string.h>

#define MAX 32

int MyStrLen (char str[]) {
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
	
	}

	return i;
}

int MyStrnCmp (char str1[], char str2[]) {

		if (str1[0] > str2[0])
			return 1;
		else if (str1[0] < str2[0])
			return -1;
			
	if (str1[0] == '\0' && str2[0] == '\0')
		return 0;
	else if (str1[0] == '\0')
		return -1;
		else
			return 1;
}
int my_reverse(char str2[])
{
	for (int i = 0, j = len - 1; i <= j; i++, j--) {
        char c = str2[i];
        str2[i] = str2[j];
        str2[j] = c;
    }
}
int MyStrCat (char str1[], char str2[])
{
		s2 = MyStrCmp(s1);
}

int MyStrCmp (char str1[], char str2[]) {
	int i;
	
	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
		if (str1[i] > str2[i])
			return 1;
		else if (str1[i] < str2[i])
			return -1;
			
	if (str1[i] == '\0' && str2[i] == '\0')
		return 0;
	else if (str1[i] == '\0')
		return -1;
		else
			return 1;
	  
}

int main () {
	char s1 [MAX] = "a", s2[MAX];
	int t;
	char n;
	char s3[MAX];
	while (MyStrCmp(s1, "done") != 0) {
		printf ("s1: ");
		scanf ("%s", s1); getchar();
		
		printf ("s2: ");
		scanf ("%s", s2); getchar();
		
		t = MyStrCmp (s1, s2);
		
		printf ("Len of %s is %d and Len of %s is %d\n", s1, MyStrLen(s1), s2, MyStrLen(s2));
		
		if (t == 0)
		 printf ("%s and %s are equal\n", s1, s2);
		else if (t > 0)
		  printf ("%s is greater than %s\n", s1, s2);
		  else 
		   printf ("%s is less than %s\n", s1, s2);
	}
	printf("Type in a number for n\n");
	scanf("%d", &n);
	MyStrCmp(n);
	printf("%c", n);
	s2 = MyStrCmp(s1);
	s3 = MyStrCmp(s1) + MyStrCmp(s2);
	
	
}
