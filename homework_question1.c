//Aishik Barua ID:115899946
#include <stdio.h>
#include <string.h>
#define COLS 39
#define ROWS 5

void ToPigLatin(char* word) {
    if (word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U' || word[0] == 'a' ||
        word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u') 
		{
        printf("%sway ", word);
    	} 
	else {
        int i;
        int vowel = 0;
        for (i = 1; i < strlen(word) || vowel !=0 ; i++) {
            if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || 
                word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||)
				{
                vowel = 1;
            	}
        }
        
        if((word[0] >= 'A' && word[0] <= 'Z'))
        {
        printf("%c%c%say ", word[0], word[1] - 'a' + 'A', &word[i]);

		}
		else
		{
		printf("%s%say ", &word[i], word);
		}
    }
}

int main() {
    char words[ROWS][COLS]; 

    printf("Input 5 words: ");
    for (int i = 0; i < ROWS; i++) 
	{
        scanf("%s", words[i]);
    }

    printf("Pig Latin version of the 5 words:\n");
    for (int i = 0; i < ROWS; i++) 
	{
        ToPigLatin(words[i]);
    }
    printf("\n");

    return 0;
}

