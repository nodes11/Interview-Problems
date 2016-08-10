#include <stdio.h>
#include <string.h>



int reverseSentence(char *sentence, int first)
{
	char *s;
	
	if (first == 1)
	{
		s = strtok(sentence, " ");
	}
	
	if (sentence)
	{
		s = strtok(0, " ");
		reverseSentence(s, 0);
		printf("%s ", sentence);
	}

	return 0;
}

int main(int argc, char *argv[])
{
	int i;
	char sentence[256];

	if (argc < 2)
	{
		printf("Invalid arguments\n");
	}

	for (i = 1; i < argc; i++)
	{
		strcat(sentence, argv[i]);
		strcat(sentence, " ");
	}

	reverseSentence(sentence, 1);

	putchar('\n');

	return 0;
}
