#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s = (char*)malloc(1*sizeof(char));
	printf("Enter a string: \t"); // It can be of any length
	int c;
	int i = 0;
	/* Read characters until found an EOF or newline character. */
	while ((c = getchar()) != EOF && c!='\n')
	{
		
		s[i] = c;
		i += 1;
		s =(char*) realloc(s, (i + 1)*sizeof(char)); // Add space for another character to be read.
	}
	s[i] = '\0';  // Null terminate the string
	printf("Entered string: \t%s\n", s);
	free(s);
	return 0;
}