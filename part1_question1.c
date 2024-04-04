//Aishik Barua ID:115899946
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_isalpha(int c)
{
	return c >= 'a' && c <= 'z' || c>= 'A' && c <= 'Z';
}
int my_isdigit(int c)
{
	return c>= '0' && c <= '9';
}
 int my_isupper(int c)
{
	return c>= 'A' && c>= 'Z';
}

char my_toupper(char c)
{
	if(c>= 'a' && c<= 'z')
	{
		return c - 'a' + 'A';
	}
	return c;
}
char my_tolower(char c)
{
	if(c>= 'A' && c<= 'Z')
	{
		return c - 'A' + 'a';
	}
	return c;
}

int main ()
{
	char c;
	printf("type a char for c\n");
	scanf("%c", &c);
		printf("%d\n", my_isalpha(c));

		printf("%d\n", 	my_isdigit(c));

		printf("%d\n", my_isupper(c));

		printf("%c\n",my_toupper(c));

		printf("%c\n",	my_tolower(c));
	return 0;
}
